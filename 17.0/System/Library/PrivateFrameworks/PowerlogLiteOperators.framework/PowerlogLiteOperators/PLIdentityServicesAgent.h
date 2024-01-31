@class NSMutableDictionary, NSString, PLXPCListenerOperatorComposition, NSDate, NRDeviceMonitor;

@interface PLIdentityServicesAgent : PLAgent <NRDeviceMonitorDelegate>

@property (retain) PLXPCListenerOperatorComposition *localMessageHandler;
@property (retain) PLXPCListenerOperatorComposition *networkStatsHandler;
@property (retain) PLXPCListenerOperatorComposition *infraWiFiRequestHandler;
@property (retain) PLXPCListenerOperatorComposition *localLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *ipsecLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *cloudMessagingHandler;
@property (retain) PLXPCListenerOperatorComposition *idsLinkPreferenceRequestHandler;
@property (retain) PLXPCListenerOperatorComposition *idsOutgoingPushSentListener;
@property (retain) PLXPCListenerOperatorComposition *idsIncomingPushReceivedListener;
@property (retain) NSMutableDictionary *previousStatsByPriority;
@property (retain) NSDate *initialEntryDate;
@property (retain) NSDate *lastLocalDeliveryLogDate;
@property (retain) NSMutableDictionary *lastEntryDatePerCategory;
@property (retain) NRDeviceMonitor *nrdm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryEventIntervalDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionIDSLocalMessage;
+ (id)entryEventPointDefinitionIDSOutgoingPushSent;
+ (id)entryDefinitionIDSMessageStats;
+ (id)entryEventForwardDefinitions;
+ (id)entryDefinitionLocalInfraWiFiRequests;
+ (id)entryDefinitionIDSSocketStats;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionIDSIncomingPushReceived;
+ (id)entryEventPointDefinitionIDSLinkPreferenceRequest;
+ (id)entryDefinitionLocalLink;
+ (id)entryDefinitionCloudMessaging;

- (id)init;
- (void)createIDSAccountingEventsWithEntries:(id)a0;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)logCloudMessaging:(id)a0;
- (void)logIDSLinkPreference:(id)a0;
- (void)notifyLinkType:(unsigned long long)a0;
- (void)deviceLinkTypeDidChange:(id)a0 linkType:(unsigned char)a1;
- (void)createBTAccountingEvents:(id)a0;
- (void)logIDSNetworkEntries:(id)a0;
- (void)logIDSOutgoingPushSent:(id)a0;
- (void)logLocalMessageTopic:(id)a0;
- (void)logLocalInfraWiFiFrequests:(id)a0;
- (void).cxx_destruct;
- (void)setCurrentLinkType;
- (void)logLocalLinkType:(unsigned long long)a0;
- (void)logIDSIncomingPushReceived:(id)a0;

@end
