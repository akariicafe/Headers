@class NSString, MLModel, MLPredictionOptions, NSMutableDictionary, NSMutableArray;
@protocol LipMovementVADDelegate;

@interface SDLipMovementVAD : NSObject {
    NSMutableArray *_lipMovementDataArray;
    NSString *_configFile;
    MLModel *_lipMovementVADModel;
    MLPredictionOptions *_options;
    int _framesToNextPrediction;
    NSMutableDictionary *_blendshapeLocationToIndexMap;
}

@property (readonly, nonatomic) double visualSpeechProbability;
@property (weak, nonatomic) id<LipMovementVADDelegate> delegate;

- (void)reset;
- (void).cxx_destruct;
- (id)initWithModelFile:(id)a0;
- (void)addFaceTrackingData:(id)a0 atMachAbsTime:(unsigned long long)a1;
- (void)runModel;
- (void)setupBlendshapeIndexArray;

@end
