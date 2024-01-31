@class NSString, AppleTypeCRetimerIIC, NSObject;
@protocol OS_os_log, AppleTypeCRetimerUpdaterIICDelegate;

@interface AppleTypeCRetimerUpdaterIIC : NSObject <AppleTypeCRetimerIICDelegate> {
    AppleTypeCRetimerIIC *_iic;
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSString *bverString;
@property (readonly) NSString *internalFirmwareVersion;
@property (weak) id<AppleTypeCRetimerUpdaterIICDelegate> delegate;

+ (id)getDeviceNames;
+ (id)getRouterIDs;

- (void).cxx_destruct;
- (void)performReset;
- (BOOL)updateWithFTAB:(id)a0;
- (void)bytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (id)initWithRouterID:(unsigned char)a0;
- (id)queryChipInfo:(id *)a0;
- (id)queryHardwareID:(id *)a0;
- (BOOL)startPacketDumperWithFileName:(id)a0;

@end
