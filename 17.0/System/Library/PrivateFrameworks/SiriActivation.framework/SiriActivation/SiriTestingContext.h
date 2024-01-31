@class NSDictionary, AFRequestInfo;

@interface SiriTestingContext : SiriContext

@property (readonly, nonatomic) NSDictionary *testingContext;
@property (readonly, nonatomic) AFRequestInfo *testingRequestInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPPTContext:(id)a0;
- (BOOL)containsAudioInput;
- (BOOL)containsRecognitionStrings;
- (id)initWithAudioInput:(id)a0;
- (id)initWithAudioInput:(id)a0 siriContextOverride:(id)a1;
- (id)initWithPPTContext:(id)a0 siriContextOverride:(id)a1;
- (id)initWithRecognitionStrings:(id)a0;
- (id)initWithRecognitionStrings:(id)a0 siriContextOverride:(id)a1;
- (id)initWithRequestInfo:(id)a0 recognitionStrings:(id)a1;
- (id)initWithRequestInfo:(id)a0 recognitionStrings:(id)a1 siriContextOverride:(id)a2;

@end
