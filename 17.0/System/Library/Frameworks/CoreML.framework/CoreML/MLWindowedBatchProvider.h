@protocol MLBatchProvider;

@interface MLWindowedBatchProvider : NSObject <MLBatchProvider>

@property (retain, nonatomic) id<MLBatchProvider> fullBatch;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long windowLength;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithBatch:(id)a0 startIndex:(long long)a1 windowLength:(long long)a2 error:(id *)a3;

@end
