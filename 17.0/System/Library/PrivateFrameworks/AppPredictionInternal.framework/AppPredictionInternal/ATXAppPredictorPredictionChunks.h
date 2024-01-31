@class NSData;

@interface ATXAppPredictorPredictionChunks : NSObject

@property (retain, nonatomic) NSData *predictionSetChunk;
@property (retain, nonatomic) NSData *feedbackStateChunk;

- (id)init;
- (id)initWithPredictionSetChunk:(id)a0 feedbackStateChunk:(id)a1;
- (id)chunkArray;
- (void).cxx_destruct;
- (id)joinChunks;

@end
