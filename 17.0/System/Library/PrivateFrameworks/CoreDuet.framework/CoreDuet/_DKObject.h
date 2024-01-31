@class NSString, NSUUID, _DKSource, NSDate;

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSUUID *UUID;
@property (retain) _DKSource *source;
@property (retain) NSDate *creationDate;
@property (retain) NSDate *localCreationDate;

+ (id)entityName;
+ (id)fromPBCodable:(id)a0;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (id)fetchObjectWithUUID:(id)a0 context:(id)a1;

- (id)stringValue;
- (BOOL)boolValue;
- (long long)integerValue;
- (id)init;
- (id)entityName;
- (void)encodeWithCoder:(id)a0;
- (long long)typeCode;
- (BOOL)copyToManagedObject:(id)a0;
- (id)toPBCodable;
- (void).cxx_destruct;
- (double)doubleValue;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)copyBaseObjectInfoFromManagedObject:(id)a0 cache:(id)a1;

@end
