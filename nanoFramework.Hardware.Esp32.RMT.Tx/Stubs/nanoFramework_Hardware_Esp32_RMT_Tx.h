//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#ifndef _NANOFRAMEWORK_HARDWARE_ESP32_RMT_TX_H_
#define _NANOFRAMEWORK_HARDWARE_ESP32_RMT_TX_H_

#include <nanoCLR_Interop.h>
#include <nanoCLR_Runtime.h>
struct Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter
{
    static const int FIELD__mCarierEnabled = 65535;
    static const int FIELD__mCarierHighLevel = 65535;
    static const int FIELD__mCarierHighLvl = 65535;
    static const int FIELD__mCarierLowLevel = 65535;
    static const int FIELD__mChannel = 65535;

    NANOCLR_NATIVE_DECLARE(NativeDispose___STATIC__VOID__I4);
    NANOCLR_NATIVE_DECLARE(NativeGetClockDiv___STATIC__U1__I4);
    NANOCLR_NATIVE_DECLARE(NativeGetTransmitIdleLevel___STATIC__BOOLEAN__I4);
    NANOCLR_NATIVE_DECLARE(NativeInit___STATIC__I4__I4);
    NANOCLR_NATIVE_DECLARE(NativeIsSource80MHz___STATIC__BOOLEAN__I4);
    NANOCLR_NATIVE_DECLARE(NativeIsTransmitIdleEnabled___STATIC__BOOLEAN__I4);
    NANOCLR_NATIVE_DECLARE(NativeSendData___STATIC__VOID__I4__SZARRAY_U1);
    NANOCLR_NATIVE_DECLARE(NativeSetCarierMode___STATIC__VOID__I4__BOOLEAN__U2__U2__BOOLEAN);
    NANOCLR_NATIVE_DECLARE(NativeSetClockDiv___STATIC__VOID__I4__U1);
    NANOCLR_NATIVE_DECLARE(NativeSetSource80MHz___STATIC__VOID__I4__BOOLEAN);
    NANOCLR_NATIVE_DECLARE(NativeSetTransmitIdleEnabled___STATIC__VOID__I4__BOOLEAN);
    NANOCLR_NATIVE_DECLARE(NativeSetTransmitIdleLevel___STATIC__VOID__I4__BOOLEAN);

    //--//

};



extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_nanoFramework_Hardware_Esp32_RMT_Tx;

#endif  //_NANOFRAMEWORK_HARDWARE_ESP32_RMT_TX_H_
