@class NSString, NSArray, MANodeFilter, PGGraphROINodeCollection;

@interface PGGraphROINode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature> {
    NSString *_label;
}

@property (class, readonly) MANodeFilter *urbanFilter;
@property (class, readonly) MANodeFilter *beachFilter;
@property (class, readonly) MANodeFilter *mountainFilter;
@property (class, readonly) MANodeFilter *natureFilter;
@property (class, readonly) MANodeFilter *waterFilter;

@property (readonly, nonatomic) NSString *pg_topic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PGGraphROINodeCollection *collection;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;
+ (id)filterForTypes:(id)a0;
+ (id)_labelForROIType:(unsigned long long)a0;
+ (id)_localizationKeyForROINode:(id)a0;
+ (unsigned long long)_roiTypeForLabel:(id)a0;
+ (id)filterWithLabels:(id)a0;
+ (id)momentOfROI;
+ (id)validROILabels;

- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithROIType:(unsigned long long)a0;

@end
