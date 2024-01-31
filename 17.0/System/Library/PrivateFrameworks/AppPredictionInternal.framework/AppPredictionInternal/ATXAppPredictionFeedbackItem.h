@class NSString;

@interface ATXAppPredictionFeedbackItem : NSObject {
    float _scoreInputs[817];
}

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) float totalScore;
@property (readonly, nonatomic) const float *scoreInputs;

+ (id)feedbackItemsForChunks:(id)a0;
+ (id)feedbackItemsForCacheFileData:(id)a0;
+ (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })predictionItemsForFeedbackChunk:(id)a0;
+ (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })predictionItemsInFeedbackChunkFromCacheFileData:(id)a0;
+ (id)feedbackItemsForFeedbackChunk:(id)a0;
+ (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })predictionItemsInFeedbackChunkFromCacheChunks:(id)a0;
+ (id)feedbackItemsForResponse:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 totalScore:(float)a1 scoreInputs:(const float *)a2;

@end
