{$IFDEF FPC}
  {$DEFINE UseLowVer}
  // fcp��ʹ�ü���delphi�﷨
  {$mode delphi}
{$ENDIF}

{$IFNDEF UNICODE}
   {$DEFINE UseLowVer}
{$ENDIF}

// ����֧��
//{$IF Defined(FPC) or not Defined(UseLowVer)}
{$IFNDEF UseLowVer}
   {$DEFINE SupportGeneric}
{$ENDIF}