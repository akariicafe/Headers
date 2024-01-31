@class HFHomePodAlarmItemModule;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItemManager : HFItemManager

@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, nonatomic) HFHomePodAlarmItemModule *alarmItemModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)a0 mediaProfileContainer:(id)a1;

@end
