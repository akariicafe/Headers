@class NSURL, NSMutableDictionary;

@interface CAXContextualActionsPredictor : NSObject

@property (retain, nonatomic) NSURL *modelUrl;
@property (retain, nonatomic) NSURL *configUrl;
@property (retain, nonatomic) NSURL *encoderUrl;
@property (retain, nonatomic) NSURL *decoderUrl;
@property (retain, nonatomic) NSMutableDictionary *model;
@property (retain, nonatomic) NSMutableDictionary *typeEncoder;
@property (retain, nonatomic) NSMutableDictionary *actionEncoder;
@property (retain, nonatomic) NSMutableDictionary *typeDecoder;
@property (retain, nonatomic) NSMutableDictionary *actionDecoder;

+ (id)encoderFileName;
+ (id)decoderFileName;
+ (id)bigramDictKey;
+ (id)defaultCoderUrlForName:(id)a0;
+ (id)defaultConfigFileUrl;
+ (id)defaultGlobalModelUrl;
+ (id)defaultPersonalizedModelUrl;
+ (id)frequencyDictKey;
+ (id)ioDictKey;
+ (id)ioNoneType;
+ (id)personalizedModelFileName;
+ (id)unigramDictKey;

- (void).cxx_destruct;
- (void)saveModelToUrl:(id)a0;
- (id)predictNumActions:(unsigned long long)a0 givenContext:(id)a1;
- (void)addEncodedActionSequence:(id)a0 toFrequencyDict:(id)a1;
- (void)addKeyString:(id)a0 andValueString:(id)a1 toCounterDict:(id)a2;
- (void)addModelResults:(id)a0 toFinalResults:(id)a1 withNumActions:(unsigned long long)a2 seenSet:(id)a3;
- (void)combineDict:(id)a0 withSourceDict:(id)a1;
- (id)convertToStringEncodedActionSequence:(id)a0;
- (id)encodeActionSequence:(id)a0;
- (id)encodeContentTypes:(id)a0;
- (id)extractCAElementsByOrderingCounterDictByValue:(id)a0;
- (id)extractInputTypesAsCAXContentFromActionId:(id)a0;
- (void)fillNormalizedFrequencyValuesOnPredictions:(id)a0;
- (id)getWFContentTypeStringFromContentTypeString:(id)a0;
- (id)initWithDefaultCodersAndModelUrl:(id)a0 configUrl:(id)a1;
- (id)initWithModelUrl:(id)a0 configUrl:(id)a1;
- (id)initWithModelUrl:(id)a0 encoderUrl:(id)a1 decoderUrl:(id)a2 configUrl:(id)a3;
- (void)loadCoderFilesToInstanceFromDefaulUrls;
- (void)loadCoderFilesToInstanceFromEncoderUrl:(id)a0 decoderUrl:(id)a1;
- (void)loadModelsFromUrl:(id)a0;
- (void)persistCoderFileChangesToEncoderUrl:(id)a0 decoderUrl:(id)a1;
- (void)updateModelWithSummary:(id)a0;

@end
