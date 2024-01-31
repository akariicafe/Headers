@class FBSDisplayLayoutMonitor;
@protocol CMContinuityCaptureLockScreenLayoutMonitorDelegate;

@interface CMContinuityCaptureLockScreenLayoutMonitor : NSObject {
    FBSDisplayLayoutMonitor *_layoutMonitor;
    BOOL _shieldFrontMostInLayout;
    BOOL _firstShieldLayoutReceived;
    BOOL _lockScreenInLayout;
}

@property (weak, nonatomic) id<CMContinuityCaptureLockScreenLayoutMonitorDelegate> delegate;
@property (readonly, nonatomic) BOOL lockScreenInLayout;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleLayout:(id)a0;

@end
