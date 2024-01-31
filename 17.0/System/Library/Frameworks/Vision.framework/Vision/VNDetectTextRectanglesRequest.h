@class NSString, NSArray;

@interface VNDetectTextRectanglesRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) BOOL detectDiacritics;
@property (nonatomic) BOOL minimizeFalseDetections;
@property (copy, nonatomic) NSString *textRecognition;
@property (copy, nonatomic) NSString *additionalCharacters;
@property (nonatomic) BOOL reportCharacterBoxes;
@property (readonly, copy) NSArray *results;

+ (void)initialize;
+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;
- (BOOL)_detectCreditCardTextWithRequestPerformingContext:(id)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_detectTextWithRequestPerformingContext:(id)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;
- (id)_futharkRecognitionLanguage;

@end
