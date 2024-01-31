@protocol CSUBuffer;

@interface CSUSceneNetV5NetworkOutput : NSObject

@property (readonly) id<CSUBuffer> scenePrint;
@property (readonly) id<CSUBuffer> sceneClassificationLikelihoods;
@property (readonly) id<CSUBuffer> aestheticsAttributeScores;
@property (readonly) id<CSUBuffer> aestheticsGlobalScores;
@property (readonly) id<CSUBuffer> detectionScoreHeatMap;
@property (readonly) id<CSUBuffer> detectionCoordinateOffsetMap;
@property (readonly) id<CSUBuffer> saliencyAttentionMap;
@property (readonly) id<CSUBuffer> saliencyObjectnessMap;
@property (readonly) id<CSUBuffer> fingerprintEmbedding;
@property (readonly) id<CSUBuffer> entityNetClassificationLikelihoods;

- (void).cxx_destruct;
- (id)initWithScenePrint:(id)a0 sceneClassificationLikelihoods:(id)a1 aestheticsAttributeScores:(id)a2 aestheticsGlobalScores:(id)a3 detectionScoreHeatMap:(id)a4 detectionCoordinateOffsetMap:(id)a5 saliencyAttentionMap:(id)a6 saliencyObjectnessMap:(id)a7 fingerprintEmbedding:(id)a8 entityNetClassificationLikelihoods:(id)a9;

@end
