@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject

@property (retain, nonatomic) NSMutableArray *assetBatches;
@property (retain, nonatomic) NSMutableSet *failedAssetBatches;
@property (nonatomic) unsigned int sizeUpperBound;
@property (nonatomic) unsigned int size;

- (id)init;
- (void)addAssetBatch:(id)a0;
- (id)successfulBatches;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (void)addFailedBatch:(id)a0;
- (BOOL)hasSuccessfulBatches;
- (BOOL)isEmpty;

@end
