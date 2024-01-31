@class NSManagedObjectID;

@interface _DPModelInfoRecord : NSObject <_DPStorageMOConversion, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) short majorVersion;
@property (nonatomic) short minorVersion;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL submitted;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)a0;

- (id)init;
- (id)entityName;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMajorVersion:(short)a0 minorVersion:(short)a1 creationDate:(double)a2 objectId:(id)a3;
- (BOOL)isEqualToModelInfo:(id)a0;

@end
