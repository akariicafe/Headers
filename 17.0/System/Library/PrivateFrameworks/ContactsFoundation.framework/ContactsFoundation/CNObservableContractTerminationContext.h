@class NSArray;

@interface CNObservableContractTerminationContext : NSObject

@property (readonly, copy) NSArray *callStack;
@property (readonly) unsigned long long threadId;

+ (unsigned long long)currentThreadId;
+ (id)currentContext;

- (void).cxx_destruct;
- (id)initWithCallStack:(id)a0 threadId:(unsigned long long)a1;

@end
