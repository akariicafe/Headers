@class NSString, HFStaticItemProvider, HFItem, HFUserNotificationServiceTopicItemProvider, HMHome;

@interface HUUserNotificationTopicListModule : HFItemModule

@property (class, readonly, copy, nonatomic) NSString *sectionID;

@property (readonly, nonatomic) HFUserNotificationServiceTopicItemProvider *notificationTopicItemProvider;
@property (readonly, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFItem *bridgesItem;
@property (retain, nonatomic) HFItem *networkRoutersListItem;
@property (retain, nonatomic) HFItem *speakerSettingsItem;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (id)topicForItem:(id)a0;

@end
