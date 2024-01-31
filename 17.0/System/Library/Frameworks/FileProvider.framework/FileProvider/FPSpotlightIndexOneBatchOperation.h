@class FPSpotlightIndexer, NSArray, NSData, NSError;

@interface FPSpotlightIndexOneBatchOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    BOOL _isInitialIndexing;
    BOOL _isOutOfBandIndexing;
    unsigned long long _logSection;
}

@property (retain, nonatomic) NSArray *updatedItems;
@property (retain, nonatomic) NSArray *deletedItemIDs;
@property (retain, nonatomic) NSData *nextAnchor;
@property (retain, nonatomic) NSError *fetchError;
@property (copy, nonatomic) id /* block */ canIndexFromCurrentState;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithIndexer:(id)a0 isInitialIndexing:(BOOL)a1 isOutOfBandIndexing:(BOOL)a2 queue:(id)a3;

@end
