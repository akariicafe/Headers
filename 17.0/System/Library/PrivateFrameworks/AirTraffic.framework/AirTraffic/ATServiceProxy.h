@class NSString, NSXPCConnection;

@interface ATServiceProxy : ATService <ATServiceObserver>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)messageLinks;
- (void)service:(id)a0 willOpenMessageLink:(id)a1;
- (void)service:(id)a0 willOpenMessageLink:(id)a1 completion:(id /* block */)a2;

@end
