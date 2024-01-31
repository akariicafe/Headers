@class NSMutableArray;

@interface CADXPCInvocationContextHolder : NSObject {
    NSMutableArray *_retainedArguments;
}

@property (readonly, nonatomic) id proxy;

- (void)clear;
- (void).cxx_destruct;
- (void)retainProxy:(id)a0 andArgumentsInInvocation:(id)a1;

@end
