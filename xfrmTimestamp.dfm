object frmTimestamp: TfrmTimestamp
  Left = 0
  Top = 0
  Align = alClient
  BorderStyle = bsNone
  Caption = 'frmTimestamp'
  ClientHeight = 630
  ClientWidth = 744
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 48
    Top = 40
    Width = 185
    Height = 13
    Caption = 'Label1Unix'#26102#38388#25139#65288'Unix timestamp'#65289
  end
  object Button1: TButton
    Left = 320
    Top = 392
    Width = 81
    Height = 49
    Caption = 'Button1'
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 239
    Top = 37
    Width = 210
    Height = 21
    TabOrder = 1
    Text = 'Edit1'
  end
  object ComboBox1: TComboBox
    Left = 455
    Top = 37
    Width = 65
    Height = 21
    ItemIndex = 0
    TabOrder = 2
    Text = #31186
    Items.Strings = (
      #31186
      #27627#31186)
  end
  object Edit2: TEdit
    Left = 526
    Top = 37
    Width = 171
    Height = 21
    TabOrder = 3
    Text = 'Edit2'
  end
end
