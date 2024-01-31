@class VCPDatabaseReader, NSDictionary, NSArray, PHAsset, NSSet;

@interface VCPDatabaseBatchIterator : NSObject {
    VCPDatabaseReader *_reader;
    NSArray *_assets;
    NSSet *_resultsTypes;
    int _batchSize;
    int _idxLast;
    int _idxCurrent;
    NSDictionary *_batchAnalyses;
}

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) NSDictionary *analysis;

+ (id)iteratorForAssets:(id)a0 withDatabaseReader:(id)a1 resultTypes:(id)a2 batchSize:(int)a3;

- (BOOL)next;
- (void)nextBatch;
- (void).cxx_destruct;
- (id)initWithDatabaseReader:(id)a0 forAssets:(id)a1 resultsTypes:(id)a2 batchSize:(int)a3;

@end
