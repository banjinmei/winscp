// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DiscMon.pas' rev: 6.00

#ifndef DiscMonHPP
#define DiscMonHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <CompThread.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Discmon
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TDiscMonitorNotify)(System::TObject* Sender, const AnsiString Directory, bool &SubdirsChanged);

typedef void __fastcall (__closure *TDiscMonitorInvalid)(System::TObject* Sender, const AnsiString Directory, const AnsiString ErrorStr);

typedef void __fastcall (__closure *TDiscMonitorSynchronize)(System::TObject* Sender, Classes::TThreadMethod Method);

typedef void __fastcall (__closure *TDiscMonitorFilter)(System::TObject* Sender, const AnsiString DirectoryName, bool &Add);

typedef void __fastcall (__closure *TDiscMonitorTooManyDirectories)(System::TObject* Sender, int &MaxDirectories);

typedef void __fastcall (__closure *TDiscMonitorDirectoriesChange)(System::TObject* Sender, int Directories);

class DELPHICLASS TDiscMonitorThread;
class PASCALIMPLEMENTATION TDiscMonitorThread : public Compthread::TCompThread 
{
	typedef Compthread::TCompThread inherited;
	
private:
	TDiscMonitorNotify FOnChange;
	TDiscMonitorInvalid FOnInvalid;
	TDiscMonitorSynchronize FOnSynchronize;
	TDiscMonitorFilter FOnFilter;
	TDiscMonitorDirectoriesChange FOnDirectoriesChange;
	Classes::TStrings* FDirectories;
	unsigned FFilters;
	unsigned FDestroyEvent;
	unsigned FChangeEvent;
	bool FSubTree;
	int FChangeDelay;
	AnsiString FNotifiedDirectory;
	bool FSubdirsChanged;
	AnsiString FInvalidMessage;
	int FNotifiedDirectories;
	void __fastcall InformChange(void);
	void __fastcall InformInvalid(void);
	void __fastcall InformDirectoriesChange(void);
	void __fastcall SetDirectories(const Classes::TStrings* Value);
	void __fastcall SetFilters(unsigned Value);
	void __fastcall SetSubTree(bool Value);
	void __fastcall SaveOSError(void);
	
protected:
	virtual void __fastcall Execute(void);
	void __fastcall Update(void);
	void __fastcall DoSynchronize(Classes::TThreadMethod Method);
	
public:
	__fastcall TDiscMonitorThread(void);
	__fastcall virtual ~TDiscMonitorThread(void);
	__property Classes::TStrings* Directories = {read=FDirectories, write=SetDirectories};
	__property unsigned Filters = {read=FFilters, write=SetFilters, nodefault};
	__property TDiscMonitorNotify OnChange = {read=FOnChange, write=FOnChange};
	__property TDiscMonitorInvalid OnInvalid = {read=FOnInvalid, write=FOnInvalid};
	__property TDiscMonitorSynchronize OnSynchronize = {read=FOnSynchronize, write=FOnSynchronize};
	__property TDiscMonitorFilter OnFilter = {read=FOnFilter, write=FOnFilter};
	__property TDiscMonitorDirectoriesChange OnDirectoriesChange = {read=FOnDirectoriesChange, write=FOnDirectoriesChange};
	__property bool SubTree = {read=FSubTree, write=SetSubTree, nodefault};
	__property int ChangeDelay = {read=FChangeDelay, write=FChangeDelay, default=500};
};


#pragma option push -b-
enum TMonitorFilter { moFilename, moDirName, moAttributes, moSize, moLastWrite, moSecurity };
#pragma option pop

typedef Set<TMonitorFilter, moFilename, moSecurity>  TMonitorFilters;

class DELPHICLASS TDiscMonitor;
class PASCALIMPLEMENTATION TDiscMonitor : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FActive;
	TDiscMonitorThread* FMonitor;
	TMonitorFilters FFilters;
	TDiscMonitorNotify FOnChange;
	TDiscMonitorInvalid FOnInvalid;
	TDiscMonitorSynchronize FOnSynchronize;
	TDiscMonitorFilter FOnFilter;
	TDiscMonitorTooManyDirectories FOnTooManyDirectories;
	TDiscMonitorDirectoriesChange FOnDirectoriesChange;
	bool FShowMsg;
	bool FPending;
	int FMaxDirectories;
	Classes::TStrings* __fastcall GetDirectories(void);
	bool __fastcall GetSubTree(void);
	void __fastcall SetActive(bool Value);
	void __fastcall SetDirectories(Classes::TStrings* Value);
	void __fastcall SetFilters(TMonitorFilters Value);
	void __fastcall SetSubTree(bool Value);
	int __fastcall GetChangeDelay(void);
	void __fastcall SetChangeDelay(int Value);
	
protected:
	void __fastcall Change(System::TObject* Sender, const AnsiString Directory, bool &SubdirsChanged);
	void __fastcall Invalid(System::TObject* Sender, const AnsiString Directory, const AnsiString ErrorStr);
	void __fastcall Filter(System::TObject* Sender, const AnsiString DirectoryName, bool &Add);
	void __fastcall DirectoriesChange(System::TObject* Sender, int Directories);
	void __fastcall DoSynchronize(System::TObject* Sender, Classes::TThreadMethod Method);
	
public:
	__fastcall virtual TDiscMonitor(Classes::TComponent* AOwner);
	__fastcall virtual ~TDiscMonitor(void);
	void __fastcall Close(void);
	void __fastcall Open(void);
	void __fastcall AddDirectory(AnsiString Directory, bool SubDirs);
	void __fastcall SetDirectory(AnsiString Directory);
	__property TDiscMonitorThread* Thread = {read=FMonitor};
	__property int MaxDirectories = {read=FMaxDirectories, write=FMaxDirectories, nodefault};
	
__published:
	__property Classes::TStrings* Directories = {read=GetDirectories};
	__property bool ShowDesignMsg = {read=FShowMsg, write=FShowMsg, default=0};
	__property TDiscMonitorNotify OnChange = {read=FOnChange, write=FOnChange};
	__property TDiscMonitorInvalid OnInvalid = {read=FOnInvalid, write=FOnInvalid};
	__property TDiscMonitorSynchronize OnSynchronize = {read=FOnSynchronize, write=FOnSynchronize};
	__property TDiscMonitorFilter OnFilter = {read=FOnFilter, write=FOnFilter};
	__property TDiscMonitorTooManyDirectories OnTooManyDirectories = {read=FOnTooManyDirectories, write=FOnTooManyDirectories};
	__property TDiscMonitorDirectoriesChange OnDirectoriesChange = {read=FOnDirectoriesChange, write=FOnDirectoriesChange};
	__property TMonitorFilters Filters = {read=FFilters, write=SetFilters, default=1};
	__property bool SubTree = {read=GetSubTree, write=SetSubTree, default=1};
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property int ChangeDelay = {read=GetChangeDelay, write=SetChangeDelay, default=500};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Discmon */
using namespace Discmon;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DiscMon