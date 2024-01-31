@class NSArray, BWVideoFormat;

@interface BWInferenceEngineControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (retain, nonatomic) BWVideoFormat *inputFormat;
@property (copy, nonatomic) NSArray *enabledInferenceMasks;
@property (nonatomic) BOOL mattingOutputValidContentDetectionEnabled;
@property (nonatomic) BOOL fastMattingEnabled;
@property (nonatomic) BOOL smartCameraClassificationsEnabled;
@property (nonatomic) unsigned long long enabledVisionInferences;
@property (nonatomic) int personSemanticsVersion;
@property (copy, nonatomic) NSArray *swfrInferenceMasks;

- (id)init;
- (void)dealloc;

@end
