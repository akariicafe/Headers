@class NSString, NSManagedObjectID;

@interface _DPPrivacyBudgetRecord : NSObject <_DPStorageMOConversion, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double creationDate;
@property (nonatomic) double lastUpdate;
@property (nonatomic) long long balance;
@property (nonatomic) double cohortAggregateBalance;
@property (nonatomic) BOOL submitted;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)a0;

- (id)init;
- (id)entityName;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKey:(id)a0 creationDate:(double)a1 lastUpdate:(double)a2 balance:(long long)a3 cohortAggregateBalance:(double)a4 objectId:(id)a5;
- (BOOL)copyToManagedObject:(id)a0;
- (BOOL)isEqualToPrivacyBudgetRecord:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
