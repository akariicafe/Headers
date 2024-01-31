@class NSString, NSObject, NSUserActivity;
@protocol OS_dispatch_queue;

@interface PKPassViewUserActivityManager : NSObject <PKForegroundActiveArbiterObserver> {
    NSUserActivity *_currentUserActivity;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isForegroundActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (id)_init;
- (void).cxx_destruct;
- (id)_currentUserActivityPassUniqueID;
- (id)_displayNameForPass:(id)a0;
- (void)_endedViewingPass;
- (BOOL)_shouldDonateActivity:(id)a0;
- (id)_templateNameForPass:(id)a0;
- (void)endedViewingPass;
- (void)startedViewingPass:(id)a0;

@end
