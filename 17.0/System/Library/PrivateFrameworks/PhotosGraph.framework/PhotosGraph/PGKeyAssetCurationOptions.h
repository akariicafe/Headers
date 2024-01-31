@class NSSet, CLLocation, PHAsset, PGCurationCriteria;

@interface PGKeyAssetCurationOptions : NSObject <NSCopying>

@property (retain, nonatomic) CLLocation *referenceLocation;
@property (retain, nonatomic) NSSet *referencePersonLocalIdentifiers;
@property (nonatomic) unsigned long long minimumNumberOfReferencePersons;
@property (nonatomic) BOOL complete;
@property (nonatomic) BOOL focusOnPeople;
@property (nonatomic) BOOL allowContextualTrip;
@property (nonatomic) BOOL useSummarizer;
@property (nonatomic) BOOL prefilterAssetsWithFaces;
@property (nonatomic) double prefilterAssetsWithFacesThreshold;
@property (nonatomic) BOOL useContextualCurationOnly;
@property (nonatomic) BOOL promoteAutoplayableItems;
@property (nonatomic) BOOL isForMemories;
@property (nonatomic) BOOL allowGuestAsset;
@property (nonatomic) BOOL wantsGoodSquareCropScore;
@property (nonatomic) BOOL useIconicScore;
@property (nonatomic) BOOL avoidPromotingAutoplayableItemsWhenUsingIconicScore;
@property (readonly, nonatomic) PHAsset *referenceAsset;
@property (retain, nonatomic) PGCurationCriteria *curationCriteria;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReferenceAsset:(id)a0;

@end
