@class AXAccessQueue, NSObject;
@protocol OS_xpc_object;

@interface AXUIMessageContext : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage;
@property (nonatomic) void *context;
@property (retain, nonatomic) AXAccessQueue *targetAccessQueue;
@property (nonatomic) BOOL completionRequiresWritingBlock;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
