@class NSArray, SSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SSPreorderManager : NSObject {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemKinds;
    SSXPCConnection *_observerConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    struct __CFArray { } *_observers;
    NSArray *_preorders;
}

@property (readonly) NSArray *itemKinds;
@property (readonly) NSArray *preorders;

+ (id)bookStoreItemKinds;
+ (id)musicStoreItemKinds;

- (void)_sendMessageToObservers:(SEL)a0;
- (void)_handleMessage:(id)a0 fromServerConnection:(id)a1;
- (void)reloadFromServer;
- (void)_connectAsObserver;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_registerAsObserver;
- (void)cancelPreorders:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithItemKinds:(id)a0;

@end
