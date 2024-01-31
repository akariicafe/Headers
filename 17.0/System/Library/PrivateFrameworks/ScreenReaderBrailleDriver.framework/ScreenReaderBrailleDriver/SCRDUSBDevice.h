@class NSString;

@interface SCRDUSBDevice : NSObject {
    struct IOUSBDeviceStruct300 **_device;
    struct IOUSBInterfaceStruct220 **_interface;
    BOOL _isOpen;
    BOOL _isConfigured;
    NSString *_privateRunLoopMode;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _notification;
}

- (BOOL)close;
- (BOOL)setInterface:(unsigned char)a0;
- (BOOL)isConfigured;
- (BOOL)reset;
- (void)dealloc;
- (BOOL)isOpen;
- (BOOL)open;
- (id)initWithIOObject:(unsigned int)a0;
- (BOOL)setConfiguration:(unsigned char)a0;
- (void).cxx_destruct;
- (int)vendor;
- (int)product;
- (unsigned char)numberOfConfigurations;
- (unsigned long long)_transferData:(void *)a0 withSize:(unsigned long long)a1 toPipe:(unsigned char)a2 withTimeout:(double)a3 withFunction:(void /* function */ *)a4;
- (void)abortPipe:(unsigned char)a0;
- (BOOL)clearPipe:(unsigned char)a0 bothEnds:(BOOL)a1;
- (BOOL)getInformationForPipe:(unsigned char)a0 direction:(char *)a1 number:(char *)a2 transferType:(char *)a3 maxPacketSize:(unsigned short *)a4 interval:(char *)a5;
- (BOOL)openWithSeize:(BOOL)a0;
- (unsigned long long)readData:(void *)a0 withSize:(unsigned long long)a1 fromBulkPipe:(unsigned char)a2 withNoDataTimeout:(unsigned int)a3 andCompletionTimeOut:(unsigned int)a4;
- (BOOL)readData:(void *)a0 withSize:(unsigned long long *)a1 fromPipe:(unsigned char)a2;
- (unsigned long long)readData:(void *)a0 withSize:(unsigned long long)a1 fromPipe:(unsigned char)a2 withTimeout:(double)a3;
- (void)registerForDisconnectNotifications:(BOOL)a0;
- (BOOL)sendControlRequest:(unsigned char)a0 type:(unsigned char)a1 value:(unsigned short)a2 index:(unsigned short)a3 data:(void *)a4 size:(unsigned short)a5 sizeTransferred:(unsigned long long *)a6 pipe:(unsigned char)a7 timeout:(double)a8;
- (BOOL)setAlternateInterface:(unsigned char)a0;
- (BOOL)writeData:(void *)a0 withSize:(unsigned long long)a1 toBulkPipe:(unsigned char)a2 withNoDataTimeout:(unsigned int)a3 andCompletionTimeOut:(unsigned int)a4;
- (unsigned long long)writeData:(void *)a0 withSize:(unsigned long long)a1 toPipe:(unsigned char)a2 withTimeout:(double)a3;

@end
