@interface MFSwiftIMAPTaskManager : NSObject <MFTaskManager> {
    void /* unknown type, empty encoding */ workloopKey;
    void /* unknown type, empty encoding */ workloop;
    void /* unknown type, empty encoding */ callbackQueue;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ makeEngineAndAdaptor;
    void /* unknown type, empty encoding */ _engineAndAdaptor;
    void /* unknown type, empty encoding */ bodyFetchContext;
}

- (void)accountDidChange:(id)a0;
- (BOOL)deleteMailbox:(id)a0;
- (void)closeAllConnections;
- (void)addLocalAction:(id)a0;
- (void)checkForNewLocalActions;
- (BOOL)createMailbox:(id)a0;
- (void)fetchNow:(int)a0;
- (void)fetchNow:(int)a0 withMailboxes:(id)a1 completion:(id /* block */)a2;
- (id)fetchSeparatorChar;
- (void)localMailboxesDidChange;
- (BOOL)renameMailbox:(id)a0 toMailbox:(id)a1;
- (void)startBackFillingMessageBodyDownloadWithRequest:(id)a0;
- (void)stopBackFillingMessageBodyDownload;
- (id)init;
- (id)initWithAccount:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)test_tearDown;

@end
