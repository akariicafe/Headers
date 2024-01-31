@class NSString;

@interface VMUCallTreeRootWithBacktrace : VMUCallTreeRoot

@property (copy, nonatomic) NSString *backtraceString;

- (void).cxx_destruct;

@end
