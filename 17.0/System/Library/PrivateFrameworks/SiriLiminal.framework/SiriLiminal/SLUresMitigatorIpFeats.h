@class AFSpeechPackage, NSNumber, NSDictionary;

@interface SLUresMitigatorIpFeats : NSObject

@property (retain, nonatomic) AFSpeechPackage *speechPackage;
@property (retain, nonatomic) NSNumber *inputOrigin;
@property (retain, nonatomic) NSNumber *acousticFTMScores;
@property (retain, nonatomic) NSNumber *boronScore;
@property (retain, nonatomic) NSNumber *speakerIDScore;
@property (nonatomic) BOOL didDetectSpeechActivity;
@property (nonatomic) BOOL didDetectVisualActivity;
@property (nonatomic) BOOL didDetectGazeAtOrb;
@property (nonatomic) BOOL didDetectAttention;
@property (nonatomic) BOOL isAirpodsConnected;
@property (nonatomic) double timeSinceLastQuery;
@property (nonatomic) unsigned long long decisionStage;
@property (retain, nonatomic) NSNumber *prevStageOutput;
@property (retain, nonatomic) NSNumber *eosLikelihood;
@property (retain, nonatomic) NSDictionary *nldaMetaInfo;
@property (retain, nonatomic) NSNumber *nldaScore;
@property (retain, nonatomic) NSNumber *confidenceScore;
@property (retain, nonatomic) NSNumber *checkerScore;
@property (retain, nonatomic) NSNumber *phsScore;
@property (retain, nonatomic) NSNumber *lrnnScore;
@property (retain, nonatomic) NSNumber *lrnnThreshold;
@property (retain, nonatomic) NSNumber *embeddingScore;
@property (retain, nonatomic) NSNumber *externalLrnnScale;
@property (retain, nonatomic) NSNumber *externalLrnnOffset;

- (void).cxx_destruct;
- (id)initWithDefaults;

@end
