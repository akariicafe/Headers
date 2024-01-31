@class NSDictionary, NSNumber, NSSet;

@interface HMMTRVendorMetadata : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSDictionary *vendorsByVendorID;
@property (readonly, copy) NSNumber *version;
@property (readonly, copy) NSNumber *schemaVersion;
@property (readonly, copy) NSSet *vendors;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)vendorWithID:(id)a0;
- (id)initWithVersion:(id)a0 schemaVersion:(id)a1;

@end
