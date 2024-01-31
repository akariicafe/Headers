@class NSUUID, NSString, HMFTimer, HMDHomeManager, HMDWidgetConfigurationReader, NSSet, HMDWidgetTimelineController, NSMutableDictionary, NSObject, NSNotificationCenter, NSMapTable;
@protocol OS_dispatch_source, HMDarwinNotificationProvider, OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDWidgetTimelineRefresher : HMFObject <HMFTimerDelegate, HMFMessageReceiver, HMFLogging> {
    int _homeSensingChangedNotificationToken;
    int _selectedHomeChangedNotificationToken;
}

@property (weak) HMDHomeManager *homeManager;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMDarwinNotificationProvider> darwinNotificationProvider;
@property (readonly) HMDWidgetConfigurationReader *widgetConfigurationReader;
@property (readonly) HMDWidgetTimelineController *timelineController;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (copy) NSUUID *currentHomeUUID;
@property (copy) NSSet *widgetKindsToUpdate;
@property (readonly) NSMutableDictionary *accessoryIsReachableByUUID;
@property (readonly) NSObject<OS_dispatch_source> *widgetRefreshDispatchTimer;
@property (readonly, copy, nonatomic) NSString *clientIdentifierForExplicitlyMonitoredCharacteristics;
@property (readonly, nonatomic) NSMutableDictionary *monitoredCharacteristicsMapByWidget;
@property (readonly, nonatomic) NSMapTable *cachedValueByCharacteristic;
@property (readonly, nonatomic) NSMapTable *pendingWriteValueByCharacteristics;
@property (readonly, nonatomic) HMFTimer *widgetRefreshCoalesceTimer;
@property (copy, nonatomic) NSString *widgetRefreshCoalesceReason;
@property (retain, nonatomic) NSSet *widgetRefreshCoalesceKinds;
@property (readonly) NSMutableDictionary *characteristicsToPreviouslySeenValues;
@property (copy, nonatomic) id /* block */ forceUpdateWidgetTimelineHandler;
@property (copy, nonatomic) id /* block */ fetchAndStoreActiveWidgetKindsHandler;
@property (copy) NSSet *monitoredCharacteristics;
@property (retain) NSSet *activeWidgetKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)fetchSpecificationsForWidgetKinds:(id)a0;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (void)dealloc;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (id)internalMonitorCharacteristicsForCurrentHome:(id)a0 activeWidgetKinds:(id)a1;
- (id)_getPendingWriteValueForCharacteristic:(id)a0;
- (void)_removePendingWriteValueForCharacteristic:(id)a0 messageIdentifier:(id)a1;
- (void)_setPendingWriteValue:(id)a0 forCharacteristic:(id)a1 messageIdentifier:(id)a2;
- (void)fetchAndStoreActiveWidgetKinds;
- (void)forceUpdateTimelineForWidgetKinds:(id)a0;
- (void)handleAccessoryAddedNotification:(id)a0;
- (void)handleAccessoryCharacteristicsChangedNotification:(id)a0;
- (void)handleAccessoryReachabilityChangedNotification:(id)a0;
- (void)handleAccessoryRemovedNotification:(id)a0;
- (void)handleCurrentHomeChangeNotification:(id)a0;
- (void)handleCurrentOrPrimaryHomeChangedNotification:(id)a0;
- (void)handleFetchState:(id)a0;
- (void)handleHomeAccessoryReachabilityChangedNotification:(id)a0;
- (void)handleHomeAddedNotification:(id)a0;
- (void)handleHomeRemovedNotification:(id)a0;
- (void)handleHomeSensingChangedNotification;
- (void)handleMonitorCharacteristicsForWidgetMessage:(id)a0;
- (void)handleNotificationOfPossibleNewWidget:(id)a0;
- (void)handleNotifiedXPCClientsOfHomeConfigurationChangeNotification:(id)a0;
- (void)handleResidentDeviceAddedOrRemovedNotification:(id)a0;
- (void)handleResidentDeviceChangedNotification:(id)a0;
- (void)handleSelectedHomeChangedNotification;
- (void)handleWriteRequests:(id)a0;
- (id)initWithHomeManager:(id)a0 queue:(id)a1 notificationCenter:(id)a2 darwinNotificationProvider:(id)a3 widgetConfigurationReader:(id)a4 timelineController:(id)a5 timerProvider:(id)a6 logEventSubmitter:(id)a7;
- (void)internalProcessChangedCharacteristics:(id)a0 activeWidgetKinds:(id)a1;
- (id)monitorCharacteristicsForHome:(id)a0 fetchSpecifications:(id)a1;
- (void)processCharacteristicsChangedNotification:(id)a0;
- (id)reachabilityByAccessorySPIClientIdentifierForCharacteristics:(id)a0;
- (void)registerForDarwinNotifications;
- (void)registerForMessagesWithMessageDispatcher:(id)a0;
- (void)stopMonitoringOldCharacteristics;
- (void)updateMonitoredCharacteristicsAndRefreshWidgetTimelines;
- (id)valueByCharacteristicSPIClientIdentifierForCharacteristics:(id)a0;
- (id)widgetKindsToUpdateFromFetchSpecifications:(id)a0 assumingChangedCharacteristic:(id)a1;
- (id)widgetKindsToUpdateFromFetchSpecifications:(id)a0 changedCharacteristics:(id)a1;
- (void)writeCharacteristicWriteRequests:(id)a0 forHome:(id)a1 widgetKind:(id)a2 source:(unsigned long long)a3 messageIdentifier:(id)a4 qualityOfService:(long long)a5 completion:(id /* block */)a6;
- (id)writeRequestsForWriteValueByCharacteristicUniqueIdentifier:(id)a0 home:(id)a1;

@end
