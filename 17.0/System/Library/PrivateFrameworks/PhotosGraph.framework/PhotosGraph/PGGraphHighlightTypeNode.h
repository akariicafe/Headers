@class NSString, MANodeFilter, MARelation;

@interface PGGraphHighlightTypeNode : PGGraphPropertylessNode <PGAssetCollectionFeature> {
    NSString *_label;
}

@property (class, readonly, nonatomic) MANodeFilter *tripTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *concludedTripTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *longTripTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *shortTripTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *aggregationTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *onGoingTripTypeNodeFilter;
@property (class, readonly, nonatomic) MANodeFilter *defaultTypeNodeFilter;
@property (class, readonly) MARelation *highlightGroupOfType;

@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)typeNodeFilterForLabel:(id)a0;

- (id)initWithLabel:(id)a0;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;

@end
