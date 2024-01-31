@interface SessionSyncEngine.IDSServiceWrapper : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ idsService;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
}

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)init;
- (void).cxx_destruct;

@end
