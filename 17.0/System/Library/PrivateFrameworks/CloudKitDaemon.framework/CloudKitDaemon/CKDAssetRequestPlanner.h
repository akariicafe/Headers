@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject

@property (retain) NSArray *assetRegisterAndPutBatches;
@property (retain, nonatomic) NSArray *assetGetChunkKeysBatches;
@property (retain, nonatomic) NSArray *assetTokenRequests;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *assetZoneByKey;
@property (retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID;
@property (readonly, nonatomic) unsigned int assetTokenRequestSizeLimit;

- (BOOL)hasSuccessfulAssetTokenRequests;
- (void)planGetChunkKeysBatches;
- (void)planAssetRequests;
- (void)addRereferencedMMCSItem:(id)a0;
- (id)initWithMMCSEncryptionSupport:(unsigned long long)a0;
- (id)CKPropertiesDescription;
- (void)resetAssetTokenRequests;
- (id)description;
- (void).cxx_destruct;
- (void)planRegisterBatches;
- (BOOL)hasSuccessfulBatches;
- (void)addMMCSSectionItem:(id)a0;
- (void)failBatch:(id)a0;
- (void)addMMCSItem:(id)a0;

@end
