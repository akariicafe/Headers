@class SISchemaTopLevelUnionType, NSString, NSUUID, NSDictionary, NSError, NSArray;

@interface HMDCharacteristicReadWriteLogEvent : HMMHomeLogEvent <HMDBiomeLogEvent, HMDMicroLocationLogEvent, HMMCoreAnalyticsLogging, HMMSiriSELFLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *accessoryManufacturer;
@property (readonly) unsigned long long triggerSource;
@property (readonly, copy) NSString *bundleId;
@property (readonly) long long accessoryCertificationStatus;
@property (readonly) NSString *accessoryCategory;
@property BOOL isLocal;
@property BOOL isCached;
@property (readonly) BOOL isWriteOperation;
@property BOOL isTimedWrite;
@property (readonly) NSString *primaryServiceType;
@property long long linkType;
@property (readonly) long long communicationProtocol;
@property (readonly, copy) NSString *expectedTransport;
@property (readonly, copy) NSString *transportProtocolVersion;
@property BOOL isSentOverThread;
@property double localDurationInMilliseconds;
@property double residentFirstDurationInMilliseconds;
@property BOOL isResidentFirstEnabled;
@property (copy) NSError *residentFirstError;
@property int transportType;
@property BOOL isModernTransport;
@property BOOL isSlowRapport;
@property BOOL isDeviceAtHome;
@property (readonly) BOOL isResidentAvailable;
@property (readonly) BOOL isPrimaryResidentReachable;
@property (readonly) BOOL isCurrentDeviceAvailableResident;
@property (readonly) BOOL isCurrentDevicePrimaryResident;
@property (readonly) BOOL isCurrentDeviceConfirmedPrimaryResident;
@property (readonly) BOOL isRemoteAccessAllowed;
@property (readonly) BOOL isRemotelyReachable;
@property unsigned long long consecutiveFailureCount;
@property double timeIntervalSinceFirstFailure;
@property (getter=isThreadAccessory) BOOL threadAccessory;
@property (readonly, copy) NSUUID *homeUniqueIdentifier;
@property (readonly, copy) NSString *homeName;
@property (readonly) BOOL isAtHome;
@property (readonly, copy) NSString *userUUID;
@property (readonly) unsigned int numAccessoriesInHome;
@property (readonly) unsigned int numNonEmptyScenesInHome;
@property (readonly, copy) NSString *accessoryName;
@property (readonly, copy) NSString *accessoryIdentifier;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSUUID *accessoryUniqueIdentifier;
@property (readonly, copy) NSUUID *accessoryRoomUniqueIdentifier;
@property (readonly, copy) NSString *accessoryRoomName;
@property (readonly, copy) NSString *accessoryMediaRouteID;
@property (readonly, copy) NSDictionary *serviceUUIDToServiceGroupUniqueIdentifier;
@property (readonly, copy) NSDictionary *serviceUUIDToServiceGroupName;
@property (readonly, copy) NSArray *accessoryZoneUniqueIdentifiers;
@property (readonly, copy) NSArray *accessoryZoneNames;
@property (readonly, copy) NSArray *characteristicsInRequest;
@property (readonly, copy) NSArray *writtenValues;
@property (readonly, copy) NSString *transactionIdentifier;
@property (readonly, copy) NSString *clientMetricIdentifier;
@property (readonly, getter=isReachable) BOOL reachable;
@property (readonly) BOOL hasSession;
@property (readonly) unsigned long long recentSessionRetries;
@property (readonly) long long topSessionFailureErrorCode;
@property (readonly) NSString *topSessionFailureErrorDomain;
@property (readonly, getter=isHomeThreadCapable) BOOL homeThreadCapable;
@property (readonly) unsigned long long lastKnownLinkQuality;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL enabledForSiriSELFLogging;
@property (readonly, nonatomic) SISchemaTopLevelUnionType *siriInstrumentationMessage;

+ (id)eventWithCharacteristicsToRead:(id)a0 hmdAccessory:(id)a1 hapAccessory:(id)a2 source:(unsigned long long)a3 isLocal:(BOOL)a4 transactionId:(id)a5 isCached:(BOOL)a6 bundleId:(id)a7 userUUID:(id)a8;
+ (id)eventWithCharacteristicsToWrite:(id)a0 hmdAccessory:(id)a1 hapAccessory:(id)a2 source:(unsigned long long)a3 isTimedWrite:(BOOL)a4 isLocal:(BOOL)a5 transactionId:(id)a6 bundleId:(id)a7 userUUID:(id)a8 writtenValues:(id)a9;

- (void).cxx_destruct;
- (void)setLocal:(BOOL)a0;
- (void)submitAtDate:(id)a0;
- (id)biomeEventsRepresentationForLogObserver:(id)a0;
- (id)initWithCharacteristics:(id)a0 hmdAccessory:(id)a1 hapAccessory:(id)a2 source:(unsigned long long)a3 isWriteOperation:(BOOL)a4 isTimedWrite:(BOOL)a5 isLocal:(BOOL)a6 transactionId:(id)a7 isCached:(BOOL)a8 bundleId:(id)a9 userUUID:(id)a10 writtenValues:(id)a11;
- (id)microLocationMetadataForLogEventObserver:(id)a0;
- (unsigned long long)microLocationScanTriggerTypeForLogEventObserver:(id)a0;
- (void)setResidentFirstDurationWithEndDate:(id)a0;
- (BOOL)shouldTriggerMicroLocationLocalizationScanForLogEventObserver:(id)a0;
- (BOOL)shouldTriggerMicroLocationRecordingScanForLogEventObserver:(id)a0;

@end
