@class WBSParsecDFeedbackDispatcher;

@interface UniversalSearchSession : WBSParsecDSession

@property (readonly, nonatomic) WBSParsecDFeedbackDispatcher *feedbackDispatcher;

+ (BOOL)shouldUseSearchFoundation;
+ (id)sharedSession;

- (void)session:(id)a0 bag:(id)a1 didLoadWithError:(id)a2;

@end
