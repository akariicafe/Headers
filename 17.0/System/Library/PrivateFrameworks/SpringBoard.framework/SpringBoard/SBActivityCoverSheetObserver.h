@class NSString, CSActivityManager;

@interface SBActivityCoverSheetObserver : NSObject <SBActivityObserver> {
    CSActivityManager *_activityManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)activityDidDismiss:(id)a0;
- (void)activityDidExceedReducedPushBudget:(id)a0;
- (void)activityDidStart:(id)a0;
- (void)activityDidUpdate:(id)a0;
- (void)activityWasBlocked:(id)a0;
- (void)activityWasUnblocked:(id)a0;
- (BOOL)shouldHandleActivityItem:(id)a0;

@end
