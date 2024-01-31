@class NSDictionary, TRIGenericUniqueRequiredAssets;

@interface TRITreatmentAssetFetchPlan : NSObject <NSCopying>

@property (readonly, nonatomic) TRIGenericUniqueRequiredAssets *metadataForRequestedUnlinkedAssets;
@property (readonly, nonatomic) NSDictionary *fetchPlansForTreatmentIds;

+ (id)planWithMetadataForRequestedUnlinkedAssets:(id)a0 fetchPlansForTreatmentIds:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToPlan:(id)a0;
- (id)copyWithReplacementFetchPlansForTreatmentIds:(id)a0;
- (id)initWithMetadataForRequestedUnlinkedAssets:(id)a0 fetchPlansForTreatmentIds:(id)a1;
- (id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
