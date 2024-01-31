@class NSXPCConnection;
@protocol SBSHomePodControlsImplementer;

@interface SBSHomePodControlsInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSHomePodControlsImplementer> _sbProxy;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)getAllSyncedAlarmsAndTimers:(id /* block */)a0;
- (BOOL)isMediaAlarm:(id)a0;

@end
