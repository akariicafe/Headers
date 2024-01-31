@class BBSettingsGateway, NSMutableDictionary, NSString, DNDEventBehaviorResolutionService, NSObject, NCNotificationDispatcher, BBObserver;
@protocol OS_dispatch_queue;

@interface NCBulletinNotificationSource : NSObject <BBObserverDelegate, NCNotificationDispatcherSourceDelegate, NCNotificationSource> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) BBObserver *observer;
@property (retain, nonatomic) BBSettingsGateway *settingsGateway;
@property (retain, nonatomic) NCNotificationDispatcher *dispatcher;
@property (retain, nonatomic) NSMutableDictionary *sectionInfoById;
@property (retain, nonatomic) NSMutableDictionary *bulletinFeeds;
@property (retain, nonatomic) NSMutableDictionary *bulletinsToUUIDs;
@property (retain, nonatomic) NSMutableDictionary *uuidsToRequests;
@property (retain, nonatomic) DNDEventBehaviorResolutionService *eventBehaviorResolutionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dispatcher:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forSectionIdentifier:(id)a3 threadIdentifier:(id)a4;
- (id)init;
- (void)dealloc;
- (id)_bulletinsPerSectionIdForNotificationRequests:(id)a0;
- (void)dispatcher:(id)a0 setSystemScheduledDeliveryEnabled:(BOOL)a1 scheduledDeliveryTimes:(id)a2;
- (void)dispatcher:(id)a0 setDeliverQuietly:(BOOL)a1 forSectionIdentifier:(id)a2;
- (id)initWithDispatcher:(id)a0 observer:(id)a1 queue:(id)a2;
- (void)dispatcher:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)observer:(id)a0 modifyBulletin:(id)a1 forFeed:(unsigned long long)a2;
- (void)dispatcher:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forSectionIdentifier:(id)a2;
- (id)initWithDispatcher:(id)a0;
- (void)dispatcher:(id)a0 setAllowsDirectMessages:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)_applicationIconChanged:(id)a0;
- (id)_updatedRequestWithAlertOptions:(id)a0;
- (unsigned long long)_updateFeedForCoverSheetDestination:(unsigned long long)a0 storedFeed:(unsigned long long)a1;
- (void)dispatcher:(id)a0 requestsClearingNotificationRequests:(id)a1 fromDestinations:(id)a2;
- (void)dispatcher:(id)a0 setAllowsNotifications:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)observer:(id)a0 updateGlobalSettings:(id)a1;
- (void)dispatcher:(id)a0 setScheduledDelivery:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)dispatcher:(id)a0 requestsClearingNotificationRequestsInSections:(id)a1;
- (id)dispatcher:(id)a0 notificationRequestForUUID:(id)a1;
- (void)observer:(id)a0 removeSection:(id)a1;
- (void)observer:(id)a0 removeBulletin:(id)a1 forFeed:(unsigned long long)a2;
- (void)_modifySectionIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)dispatcher:(id)a0 setNotificationSystemSettings:(id)a1;
- (id)_alertOptionsWithBehavior:(id)a0;
- (void).cxx_destruct;
- (void)observer:(id)a0 updateSectionInfo:(id)a1;
- (void)observer:(id)a0 noteBulletinsLoadedForSectionID:(id)a1;
- (void)observer:(id)a0 removeBulletin:(id)a1;
- (void)observer:(id)a0 addBulletin:(id)a1 forFeed:(unsigned long long)a2 playLightsAndSirens:(BOOL)a3 withReply:(id /* block */)a4;
- (void)observer:(id)a0 noteServerConnectionStateChanged:(BOOL)a1;
- (id)_bulletinsToClearPerSectionIdForNotificationRequests:(id)a0 removingDestinations:(id)a1;
- (id)_requestUUIDForBulletinPublisherMatchID:(id)a0;
- (void)dispatcher:(id)a0 requestsClearingNotificationRequests:(id)a1;
- (void)observer:(id)a0 addBulletin:(id)a1 forFeed:(unsigned long long)a2;
- (void)dispatcher:(id)a0 didExecuteAction:(id)a1 forNotificationRequest:(id)a2;
- (void)dispatcher:(id)a0 requestsClearingNotificationRequestsFromDate:(id)a1 toDate:(id)a2 inSections:(id)a3;
- (id)_queue_sectionInfoForBulletin:(id)a0;

@end
