@class NSError;

@interface PRETrialCompletionResult : NSObject

@property (nonatomic) BOOL isCompletionCalled;
@property (nonatomic) BOOL isSuccess;
@property (retain, nonatomic) NSError *downloadError;

- (void).cxx_destruct;

@end
