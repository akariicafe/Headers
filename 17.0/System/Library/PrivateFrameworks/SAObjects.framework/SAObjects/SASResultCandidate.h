@class SASRecognition, NSNumber, NSString;

@interface SASResultCandidate : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *filteredRecognition;
@property (copy, nonatomic) NSNumber *latticeRnnMitigatorCalibrationOffset;
@property (copy, nonatomic) NSNumber *latticeRnnMitigatorCalibrationScale;
@property (copy, nonatomic) NSNumber *latticeRnnMitigatorIsProcessed;
@property (copy, nonatomic) NSString *latticeRnnMitigatorModelId;
@property (nonatomic) double latticeRnnMitigatorScore;
@property (nonatomic) double latticeRnnMitigatorThreshold;
@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *resultId;
@property (copy, nonatomic) NSNumber *speechProfileUsed;
@property (copy, nonatomic) NSString *speechRecognitionTask;

+ (id)resultCandidate;
+ (id)resultCandidateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
