@class NSString;

@interface ASDTFFeedbackSubmissionService : NSObject <TFFeedbackSubmissionService>

@property (readonly, nonatomic) unsigned long long maxNumberOfScreenshotsAllowed;
@property (readonly, nonatomic) unsigned long long maxNumberOfCommentSymbolsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
