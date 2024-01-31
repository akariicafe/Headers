@class NSDictionary;

@interface ATClientController : NSObject {
    NSDictionary *_clientMap;
    struct __CFDictionary { } *_queueMap;
}

+ (id)sharedInstance;
+ (id)controllerForDataclasses:(id)a0;

- (void)dealloc;
- (void)_snapShotWithContext:(id)a0 events:(id)a1;
- (void)resetQueues;
- (void)waitToDrain;
- (void).cxx_destruct;
- (id)queueForClient:(id)a0;
- (id)clientForDataclass:(id)a0;
- (BOOL)_loadClientsForDataclasses:(id)a0;
- (id)allClients;

@end
