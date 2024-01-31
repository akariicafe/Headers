@class NSString, NSDictionary, NSData, NSManagedObjectID;

@interface _DPPrioRecord : NSObject <_DPDediscoRecordProtocol, _DPStorageMOConversion, _DPJSONString, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSData *share1;
@property (copy, nonatomic) NSData *share2;
@property (nonatomic) long long dimension;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;
@property (retain, nonatomic) NSManagedObjectID *objectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)a0;

- (id)init;
- (id)entityName;
- (void)encodeWithCoder:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonString;
- (id)initWithKey:(id)a0 share1:(id)a1 share2:(id)a2 dimension:(long long)a3 metadata:(id)a4 creationDate:(double)a5 submitted:(BOOL)a6 objectId:(id)a7;
- (BOOL)isEqualToPrioRecord:(id)a0;

@end
