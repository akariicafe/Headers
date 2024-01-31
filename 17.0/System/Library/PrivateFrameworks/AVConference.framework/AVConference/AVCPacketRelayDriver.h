@interface AVCPacketRelayDriver : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)startMonitoringFileDescriptor:(int)a0 forConnection:(id)a1;
- (void)stopMonitoringFileDescriptor:(int)a0;

@end
