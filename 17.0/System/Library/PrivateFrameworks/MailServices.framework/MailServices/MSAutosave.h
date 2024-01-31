@class NSHashTable;

@interface MSAutosave : MSXPCService

@property (retain, nonatomic) NSHashTable *activeAutosaveSessions;

+ (id)log;
+ (id)autosave;

- (void)autosaveMessageData:(id)a0 replacingIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)autosaveSessionForIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (id)initWithRemoteObjectInterface:(id)a0;
- (id)autosavedMessageDataWithIdentifier:(id)a0;
- (id)newConnectionForInterface:(id)a0;
- (void)removeAutosavedMessageWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_getRemoteAutosaveSessionForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getIdleAutosaves:(id /* block */)a0;
- (void)_handleInterruptedConnection;
- (BOOL)hasAutosavedMessageWithIdentifier:(id)a0;

@end
