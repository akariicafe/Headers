@class NSMutableArray, Protocol;

@interface SKInvocationQueueProxy : NSObject {
    NSMutableArray *_invocationQueue;
    Protocol *_protocol;
}

@property (retain, nonatomic) id invocationTarget;

- (id)initWithProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
