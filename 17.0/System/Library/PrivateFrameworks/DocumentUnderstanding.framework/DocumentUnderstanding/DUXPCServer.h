@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DUXPCServer : NSObject {
    NSObject<OS_dispatch_queue> *_documentUpdateQueue;
    NSObject<OS_xpc_object> *_listener;
}

+ (id)sharedInstance;
+ (void)_registerDocumentUnderstandingListenerWithTextUnderstandingManager:(id)a0;
+ (void)_registerPoemMonthlyActivityWithTextUnderstandingManager:(id)a0;
+ (void)_registerPoemWeeklyActivityWithTextUnderstandingManager:(id)a0;
+ (void)registerDUXPCListenersWithManager:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_newClientConnection:(id)a0 withTextUnderstandingManager:(id)a1;
- (void)_registerDocumentUpdateHandlerListenerWithTextUnderstandingManager:(id)a0;

@end
