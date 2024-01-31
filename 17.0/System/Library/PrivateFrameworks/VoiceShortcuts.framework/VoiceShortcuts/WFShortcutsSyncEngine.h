@class NSError;

@interface WFShortcutsSyncEngine : NSObject <WFShortcutsSyncService> {
    void /* unknown type, empty encoding */ engine;
}

- (void)forceReceiveAndSendAllChangesWithCompletionHandler:(void (^)(NSError *))a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 container:(id)a1;

@end
