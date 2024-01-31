@class NSString;

@interface PGGraphOverTheYearsNode : PGGraphPropertylessNode <PGAssetCollectionFeature>

@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;

- (id)collection;
- (id)init;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (unsigned short)domain;

@end
