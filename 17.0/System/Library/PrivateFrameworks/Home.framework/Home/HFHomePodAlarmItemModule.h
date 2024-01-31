@class NSSet, NSString;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItemModule : HFItemModule <HFAccessorySettingMobileTimerAdapterObserver>

@property (readonly, nonatomic) NSSet *itemProviders;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)mobileTimerAdapterForAlarmItem:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)mobileTimerAdapter:(id)a0 didUpdateAlarms:(id)a1;
- (id)mobileTimerAdapterForMediaProfile:(id)a0;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;
- (id)initWithItemUpdater:(id)a0 mediaProfileContainer:(id)a1;

@end
