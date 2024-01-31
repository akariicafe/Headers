@class NSString, PGGraphPersonActivityMeaningNodeCollection, MARelation;

@interface PGGraphPersonActivityMeaningNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    NSString *_label;
}

@property (class, readonly) MARelation *momentOfPersonActivity;

@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) PGGraphPersonActivityMeaningNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)filterWithActivityLabels:(id)a0;
+ (id)filterWithPersonLocalIdentifiers:(id)a0 label:(id)a1;
+ (id)personOfPersonActivity;

- (id)label;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)initWithPersonLocalIdentifier:(id)a0 activity:(id)a1;

@end
