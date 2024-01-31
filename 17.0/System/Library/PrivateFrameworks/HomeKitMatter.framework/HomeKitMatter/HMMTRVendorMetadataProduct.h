@class NSString, NSDictionary, NSURL, NSNumber;

@interface HMMTRVendorMetadataProduct : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSNumber *identifier;
@property (copy) NSNumber *categoryNumber;
@property (copy) NSString *name;
@property (copy) NSString *model;
@property (copy) NSURL *installationGuideURL;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithIdentifier:(id)a0 categoryNumber:(id)a1;

@end
