object LogForm: TLogForm
  Left = 356
  Top = 178
  Width = 467
  Height = 341
  HelpType = htKeyword
  HelpKeyword = 'ui_log'
  BorderIcons = [biSystemMenu, biMinimize, biMaximize, biHelp]
  Caption = 'Log'
  Color = clBtnFace
  Constraints.MinHeight = 170
  Constraints.MinWidth = 250
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Icon.Data = {
    000001000200101010000000000028010000260000002020100000000000E802
    00004E0100002800000010000000200000000100040000000000C00000000000
    0000000000000000000000000000000000000000800000800000008080008000
    0000800080008080000080808000C0C0C0000000FF0000FF000000FFFF00FF00
    0000FF00FF00FFFF0000FFFFFF00000000000000000000033333333330000008
    FFFFFFFFF8000007FFFFF9FFF800000F8FFFF78FF8000008FFF8F07FF8000007
    F8FF7798F800000F8F88101FF8000008FFB8FFF8F8000007F8888878F800000F
    8FB8FFC8F8000008FFB88FC8F8000007F8B8F878F800000FFFFFFFCFF8000008
    FFFFFFFFF8000000000000000000FFFF0000C001000080010000800100008001
    0000800100008001000080010000800100008001000080010000800100008001
    000080010000C0010000C0030000280000002000000040000000010004000000
    0000800200000000000000000000000000000000000000000000000080000080
    00000080800080000000800080008080000080808000C0C0C0000000FF0000FF
    000000FFFF00FF000000FF00FF00FFFF0000FFFFFF0000000000000000000000
    0000000000000000000000000000000000000000000000000333333333333333
    3333333000000000000FFFFFFFFFFFFFFFFFFFF30000000000FFF8FFFFFFFFF8
    8FFFFFF300000000006FFEFFFFFFFF118FFFFFF300000000000F888888888811
    88888FF30000000000FFFEFFFFFFFFF88FFFFFF300000000006F888888888811
    78888FF300000000000FFEFFFFFFFF118FFFFFF30000000000FF888888888811
    17888FF300000000006FFEFFFFFFFFF1118FFFF300000000000F888888881178
    11788FF30000000000FFFEFFFFFF1111118FFFF300000000006F888883388111
    18888FF300000000000FFEFFBB3FFFFFFFFFFFF30000000000FF8888BB888888
    88888FF300000000006FFEFFFFFFFFFF8888FFF300000000000F88888338888C
    CCC78FF30000000000FFFEFFBB3FFFFFCC8FFFF300000000006F8888BB388888
    CC788FF300000000000FFEFFBB3FFFFFCC8FFFF30000000000FF8888BB388888
    CC788FF300000000006FFEFFBB3FFFFCCC8FFFF300000000000F8888BB888888
    87788FF30000000000FFFEFFFFFFFFFFCC8FFFF300000000006FFFFFFFFFFFFF
    CCFFFFF300000000000FFFFFFFFFFFFFFFFFFFF30000000000FFFFFFFFFFFFFF
    FFFFFFF300000000000000000000000000000000000000000000000000000000
    00000000000000000000000000000000000000000000FFFFFFFFF800000FF800
    0007F0000007E8000007E8000007F0000007E8000007E8000007F0000007E800
    0007E8000007F0000007E8000007E8000007F0000007E8000007E8000007F000
    0007E8000007E8000007F0000007E8000007E8000007F0000007E8000007E800
    0007F0000007F8000007F800000FFFFFFFFFFFFFFFFF}
  OldCreateOrder = False
  Position = poDefaultPosOnly
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object StatusBar: TTBXStatusBar
    Left = 0
    Top = 288
    Width = 459
    Height = 19
    Panels = <
      item
        Framed = False
        MaxSize = 200
        Size = 200
        StretchPriority = 100
        Tag = 0
      end>
    UseSystemFont = False
  end
  object TopDock: TTBXDock
    Left = 0
    Top = 0
    Width = 459
    Height = 26
    AllowDrag = False
    object Toolbar: TTBXToolbar
      Left = 0
      Top = 0
      Caption = 'Toolbar'
      FullSize = True
      Images = GlyphsModule.LogImages
      ParentShowHint = False
      ShowHint = True
      TabOrder = 0
      object TBXItem1: TTBXItem
        Action = NonVisualDataModule.LogCloseAction
      end
      object TBXSeparatorItem1: TTBXSeparatorItem
      end
      object TBXItem2: TTBXItem
        Action = NonVisualDataModule.LogClearAction
      end
      object TBXItem3: TTBXItem
        Action = NonVisualDataModule.LogCopyAction
      end
      object TBXItem4: TTBXItem
        Action = NonVisualDataModule.LogSelectAllAction
      end
      object TBXSeparatorItem2: TTBXSeparatorItem
      end
      object TBXItem5: TTBXItem
        Action = NonVisualDataModule.LogPreferencesAction
      end
    end
  end
end