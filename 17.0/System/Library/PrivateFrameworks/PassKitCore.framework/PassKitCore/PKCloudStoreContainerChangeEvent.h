@class NSString, NSArray, NSData, NSDate;

@interface PKCloudStoreContainerChangeEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long changeType;
@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (copy, nonatomic) NSString *beginIntervalEventIdentifier;
@property (copy, nonatomic) NSString *operationGroupName;
@property (copy, nonatomic) NSString *operationGroupNameSuffix;
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSData *changeToken;
@property (copy, nonatomic) NSString *stateName;
@property (copy, nonatomic) NSArray *objectNames;
@property (nonatomic) double timeInterval;

+ (id)_dateFormatter;
+ (id)_csvSafeString:(id)a0;
+ (id)_csvSafeStringForEvent:(id)a0;
+ (id)csvStringForEvents:(id)a0;
+ (id)intervalBeginEventWithType:(unsigned long long)a0 containerIdentifier:(id)a1 stateName:(id)a2 objectNames:(id)a3 error:(id)a4 changeToken:(id)a5 operationGroupName:(id)a6 operationGroupNameSuffix:(id)a7;
+ (id)intervalEndEventWithBeginUniqueIdentifier:(id)a0 error:(id)a1;
+ (void)populateEndIntervalEvent:(id)a0 withBeginIntervalEvent:(id)a1;
+ (id)signpostEventWithType:(unsigned long long)a0 containerIdentifier:(id)a1 stateName:(id)a2 objectNames:(id)a3 error:(id)a4 changeToken:(id)a5 operationGroupName:(id)a6 operationGroupNameSuffix:(id)a7;
+ (id)writeCSVFileForEvents:(id)a0 error:(id *)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithChangeType:(unsigned long long)a0 beginUniqueIdentifier:(id)a1 error:(id)a2;
- (id)initWithEventType:(unsigned long long)a0 changeType:(unsigned long long)a1 containerIdentifier:(id)a2 beginUniqueIdentifier:(id)a3 stateName:(id)a4 objectNames:(id)a5 error:(id)a6 changeToken:(id)a7 operationGroupName:(id)a8 operationGroupNameSuffix:(id)a9;

@end
