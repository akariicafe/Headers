@class AVOutputContext, BMScreenSharingStream;

@interface _DKScreenSharingMonitor : _DKMonitor

@property (retain, nonatomic) AVOutputContext *outputContext;
@property (retain, nonatomic) BMScreenSharingStream *screenSharingStream;
@property (nonatomic) long long currentMirroringDeviceCount;

+ (id)eventStream;
+ (id)entitlements;

- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)deactivate;
- (void)registerForScreenMirroringNotifications;
- (void)mirroringDidChange:(id)a0;

@end
