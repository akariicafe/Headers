@class NSString, NSObject;
@protocol OS_os_log;

@interface AppleTypeCRetimerIICDeviceHandle : NSObject <AppleTypeCRetimerDeviceHandle> {
    NSString *_serviceName;
    unsigned int _service;
    unsigned int _connection;
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSString *name;
@property (readonly) NSObject<OS_os_log> *log;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)initIICServiceForRouterID:(unsigned char)a0;
- (id)initWithRouterID:(unsigned char)a0 namePrefix:(id)a1;
- (int)readRegister:(unsigned char)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (int)writeRegister:(unsigned char)a0 buffer:(const void *)a1 length:(unsigned int)a2;

@end
