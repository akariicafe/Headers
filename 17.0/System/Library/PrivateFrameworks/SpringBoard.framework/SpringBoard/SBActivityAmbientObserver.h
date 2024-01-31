@class SBActivityItem, NSString, NSMutableOrderedSet;
@protocol SBActivityAmbientObserverDelegate;

@interface SBActivityAmbientObserver : NSObject <SBActivityObserver>

@property (retain, nonatomic) NSMutableOrderedSet *activeActivityItems;
@property (retain, nonatomic) NSMutableOrderedSet *pendingItems;
@property (weak, nonatomic) id<SBActivityAmbientObserverDelegate> delegate;
@property (readonly, nonatomic) BOOL hasPendingItem;
@property (readonly, nonatomic) SBActivityItem *nextPendingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)dismissAlert:(id)a0;
- (void)presentAlert:(id)a0;
- (void)activityDidEnd:(id)a0;
- (void)addPendingItem:(id)a0;
- (void)activityProminenceChanged:(BOOL)a0 item:(id)a1;
- (id)_sortActivityItems;
- (void)activityDidDismiss:(id)a0;
- (void)activityDidStart:(id)a0;
- (void)addOverlaysForOngoingActivitiesIfNecessary;
- (BOOL)isActiveActivityItem:(id)a0;
- (void)removePendingItem:(id)a0;
- (BOOL)shouldHandleActivityItem:(id)a0;

@end
