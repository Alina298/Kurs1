﻿object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 343
  ClientWidth = 748
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Menu: TPageControl
    Left = 0
    Top = 0
    Width = 740
    Height = 335
    ActivePage = TabSheet4
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'TabSheet1'
      object Стек: TButton
        Left = 111
        Top = 25
        Width = 75
        Height = 25
        Caption = #1057#1090#1077#1082
        TabOrder = 0
        OnClick = СтекClick
      end
      object Дек: TButton
        Left = 111
        Top = 80
        Width = 75
        Height = 25
        Caption = #1044#1077#1082
        TabOrder = 1
        OnClick = ДекClick
      end
      object Очередь: TButton
        Left = 111
        Top = 136
        Width = 75
        Height = 25
        Caption = #1054#1095#1077#1088#1077#1076#1100
        TabOrder = 2
        OnClick = ОчередьClick
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'TabSheet2'
      ImageIndex = 1
      object Push: TButton
        Left = 11
        Top = 3
        Width = 75
        Height = 25
        Caption = 'Push'
        TabOrder = 0
        OnClick = PushClick
      end
      object Edit1: TEdit
        Left = 24
        Top = 50
        Width = 121
        Height = 21
        TabOrder = 1
      end
      object Pop: TButton
        Left = 92
        Top = 3
        Width = 75
        Height = 25
        Caption = 'Pop'
        TabOrder = 2
        OnClick = PopClick
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'TabSheet3'
      ImageIndex = 2
      object Edit2: TEdit
        Left = 112
        Top = 48
        Width = 121
        Height = 21
        TabOrder = 0
      end
      object PushLeft: TButton
        Left = 3
        Top = 1
        Width = 75
        Height = 25
        Caption = 'PushLeft'
        TabOrder = 1
      end
      object PopLeft: TButton
        Left = 84
        Top = 1
        Width = 75
        Height = 25
        Caption = 'PopLeft'
        TabOrder = 2
      end
      object PushRight: TButton
        Left = 186
        Top = 1
        Width = 75
        Height = 25
        Caption = 'PushRight'
        TabOrder = 3
      end
      object PopRight: TButton
        Left = 267
        Top = 1
        Width = 75
        Height = 25
        Caption = 'PopRight'
        TabOrder = 4
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'TabSheet4'
      ImageIndex = 3
    end
  end
end
