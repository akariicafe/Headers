@class NSIndexSet, CKRecordID;

@interface TRITreatmentRecordFetchPlan : NSObject <NSCopying>

@property (readonly, nonatomic) CKRecordID *recordId;
@property (readonly, nonatomic) NSIndexSet *assetIndexes;

+ (id)planWithRecordId:(id)a0 assetIndexes:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToPlan:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementAssetIndexes:(id)a0;
- (id)copyWithReplacementRecordId:(id)a0;
- (id)initWithRecordId:(id)a0 assetIndexes:(id)a1;

@end
