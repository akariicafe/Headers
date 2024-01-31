@class NSArray, NSString, NSDictionary, SASRecognition;

@interface SARDExecuteNLOnServer : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *aceDelegatedUserDialogActList;
@property (copy, nonatomic) NSString *directAction;
@property (copy, nonatomic) NSDictionary *preITNRecognitionSausageMap;
@property (retain, nonatomic) SASRecognition *recognitionSausage;
@property (copy, nonatomic) NSDictionary *recognitionSausageMap;
@property (copy, nonatomic) NSDictionary *requestExecutionParameters;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
