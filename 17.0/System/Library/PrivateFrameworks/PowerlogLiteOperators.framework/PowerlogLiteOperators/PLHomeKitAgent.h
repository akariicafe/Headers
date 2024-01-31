@class PLXPCListenerOperatorComposition, PLTimer, PLEntryNotificationOperatorComposition;

@interface PLHomeKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *homeKitEventsListener;
@property (retain) PLXPCListenerOperatorComposition *homeConfigurationListener;
@property (retain) PLXPCListenerOperatorComposition *cameraConfigurationListener;
@property (retain) PLXPCListenerOperatorComposition *homeKitRegistrationListener;
@property unsigned long long numBTPushes;
@property unsigned long long numConnections;
@property unsigned long long numPrevBTPushes;
@property unsigned long long numPrevConnections;
@property unsigned long long numBTConnections;
@property unsigned long long numIPConnections;
@property unsigned long long numBonjour;
@property unsigned long long numIPEvents;
@property unsigned long long numIDSPushes;
@property unsigned long long numCloudPushes;
@property unsigned long long numBTWakeAdvt;
@property unsigned long long numBTWakes;
@property double lastapwake;
@property BOOL enablelog;
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *deviceWake;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numaggregatelines;
@property unsigned long long numBTlines;

+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionHomeKitEvents;
+ (id)entryEventForwardDefinitionCameraConfiguration;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionHomeKitRegistration;
+ (id)entryAggregateDefinitionIDSPushMessageTypes;
+ (id)entryEventPointDefinitionHomeKitAdvt;
+ (id)entryEventPointDefinitionHomeKitSummary;
+ (id)entryEventForwardDefinitionHomeConfiguration;

- (id)init;
- (void)logEventForwardHomeConfiguration:(id)a0;
- (void)log;
- (void)initOperatorDependancies;
- (void)writeAggregateCounters:(id)a0;
- (long long)registrationTypeStringToEnum:(id)a0;
- (void)logEventPointHomeKitEvents:(id)a0;
- (void)logEventForwardCameraConfiguration:(id)a0;
- (long long)eventTypeStringToEnum:(id)a0;
- (void)logEventPointHomeKitRegistration:(id)a0;
- (void).cxx_destruct;
- (void)logAggregateIDSPushMessageTypes:(id)a0;
- (BOOL)isAllowedMessageType:(id)a0;

@end
