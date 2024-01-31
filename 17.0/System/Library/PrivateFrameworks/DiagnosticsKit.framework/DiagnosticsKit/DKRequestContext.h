@interface DKRequestContext : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL completionHandlerExecuted;

- (void).cxx_destruct;

@end
