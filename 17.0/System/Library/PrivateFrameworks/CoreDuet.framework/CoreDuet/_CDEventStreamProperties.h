@class _DKObjectType, NSString, NSNumber, NSObject;

@interface _CDEventStreamProperties : NSObject

@property (readonly, nonatomic) NSObject *dataCollectionObject;
@property (readonly, nonatomic) NSNumber *dataCollectionEnabledNum;
@property (readonly, nonatomic) NSObject *platformObject;
@property (readonly, nonatomic) NSNumber *isAvailableNum;
@property (readonly, nonatomic) NSNumber *domainAvailabilityNum;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *formattedName;
@property (readonly, nonatomic) NSString *knowledgeBaseName;
@property (readonly, nonatomic) NSString *knowledgeBaseMetadataClass;
@property (readonly, nonatomic) NSString *descriptionString;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly, nonatomic) unsigned long long domainAvailability;
@property (readonly, nonatomic) _DKObjectType *valueType;
@property (readonly, nonatomic) BOOL dataCollectionEnabled;
@property (readonly, nonatomic) double timeToLive;
@property (readonly, nonatomic) double temporalPrecision;
@property (readonly, nonatomic) long long eventCountLimit;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) long long eventsPerPeriod;
@property (readonly, nonatomic) NSString *monitorClass;
@property (readonly, nonatomic) BOOL isInstant;
@property (readonly, nonatomic) BOOL isHistorical;
@property (readonly, nonatomic) BOOL shouldSaveCurrentEventOnShutdown;
@property (readonly, nonatomic) BOOL setupOnDemand;
@property (readonly, nonatomic) long long pollingPeriod;

+ (id)eventStreamPropertiesFromDictionary:(id)a0;
+ (id)eventStreamPropertiesFromDictionary:(id)a0 defaultProperties:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0 defaultProperties:(id)a1;

@end
