@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HFDebugStateDumpManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateHandlerQueue;
@property (retain, nonatomic) NSMutableDictionary *stateDumpHandlersByName;
@property (readonly, nonatomic) int logStateDumpNotifyToken;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_writeStateDump;
- (void)_listenForAttachmentRequestNotifications;
- (id)_performStateDump:(BOOL)a0;
- (id)registerStateDumpHandler:(id /* block */)a0 withName:(id)a1;

@end
