@class PGGraphSceneFeatureNodeCollection, NSString;

@interface PGGraphSceneFeatureNode : PGGraphPropertylessNode <PGAssetCollectionFeature> {
    NSString *_label;
}

@property (readonly, nonatomic) PGGraphSceneFeatureNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)filterForSceneName:(id)a0;
+ (id)filterForSceneNames:(id)a0;
+ (id)momentOfSceneFeature;

- (id)initWithLabel:(id)a0;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;

@end
