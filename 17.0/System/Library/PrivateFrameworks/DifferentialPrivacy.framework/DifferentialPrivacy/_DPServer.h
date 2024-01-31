@class NSXPCListener, _DPStorage, NSString;

@interface _DPServer : NSObject <NSXPCListenerDelegate, _DPDaemonProtocol>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) _DPStorage *db;
@property (readonly, nonatomic) BOOL metadataMethodsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldNotRecord:(id)a0 forKey:(id)a1;

- (void)recordWords:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)setupPeriodicTasksWith:(id)a0;
- (id)init;
- (void)start;
- (BOOL)metadataMethodsAllowed;
- (void)recordBitValues:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)donateDonationReceivedEventToBitacoraForKey:(id)a0 succeeded:(BOOL)a1;
- (void)recordValues:(id)a0 metadata:(id)a1 forKey:(id)a2 usingSelector:(SEL)a3;
- (void)recordStrings:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)reportsNotYetSubmittedWithReply:(id /* block */)a0;
- (void)recordBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordStrings:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordNumbersVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (BOOL)retireReports:(id)a0 inDirectory:(id)a1;
- (void)recordBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordBitVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordFloatVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithDatabaseDirectoryPath:(id)a0 reportsDirectoryPath:(id)a1 enablePeriodicTasks:(BOOL)a2 enterSandbox:(BOOL)a3;
- (void)recordValues:(id)a0 forKey:(id)a1 usingSelector:(SEL)a2;
- (void)recordNumbers:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (id)reportsNotYetSubmittedInDirecory:(id)a0;
- (void)recordNumbers:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)retireReports:(id)a0 withReply:(id /* block */)a1;

@end
