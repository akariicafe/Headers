@interface DropInCore.IDSManager : NSObject <IDSServiceDelegatePrivate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ pendingMessageResponseHandlers;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ listenerID;
    void /* unknown type, empty encoding */ delegate;
}

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
