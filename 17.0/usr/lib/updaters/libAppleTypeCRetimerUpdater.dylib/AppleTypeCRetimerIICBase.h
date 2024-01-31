@class NSString, AppleTypeCRetimerHardwareID, NSObject;
@protocol OS_os_log, AppleTypeCRetimerDeviceHandle;

@interface AppleTypeCRetimerIICBase : NSObject {
    AppleTypeCRetimerHardwareID *_hardwareID;
    id<AppleTypeCRetimerDeviceHandle> _handle;
}

@property (readonly) NSObject<OS_os_log> *log;
@property (readonly) NSString *bverString;
@property (readonly) NSString *internalFirmwareVersion;

- (void).cxx_destruct;
- (id)initWithDeviceHandle:(id)a0;
- (id)queryChipInfo:(id *)a0;
- (id)queryHardwareID:(id *)a0;
- (int)readRegister:(unsigned char)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (int)writeRegister:(unsigned char)a0 buffer:(const void *)a1 length:(unsigned int)a2;

@end
