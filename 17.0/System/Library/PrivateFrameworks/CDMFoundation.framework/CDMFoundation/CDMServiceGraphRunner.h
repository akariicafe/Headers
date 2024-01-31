@class NSOperationQueue, NSMutableDictionary;

@interface CDMServiceGraphRunner : NSObject {
    NSOperationQueue *_queue;
    NSMutableDictionary *_callbackMap;
    NSMutableDictionary *_operationMap;
    NSMutableDictionary *_operationMapWithNodeName;
    NSMutableDictionary *_handlerMap;
    NSMutableDictionary *_handlerSkipMap;
}

- (id)init;
- (void)dealloc;
- (void)suspend;
- (void)resume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)cancelAllHandlers;
- (void)runHandlerAsync:(id)a0 withCompletion:(id /* block */)a1;
- (void)waitAll;
- (void)cancelHandlerById:(id)a0 causeByError:(BOOL)a1;
- (void)cancelHandler:(id)a0;
- (void)cancelHandlerById:(id)a0;
- (void)dumpServiceGraphNodeQueue;
- (void)finishHandlerById:(id)a0;
- (id)getOperationState:(id)a0;
- (id)getServiceGraphNodeQueue;
- (id)initWithMaxConcurrentCount:(int)a0;
- (void)skipNode:(id)a0 forCondition:(id /* block */)a1 withHandlerId:(id)a2;

@end
