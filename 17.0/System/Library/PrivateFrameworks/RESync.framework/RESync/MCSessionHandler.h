@class MCSession, NSMutableDictionary, NSString, NSMutableArray, NSLock;
@protocol MCSessionPrivateDelegate;

@interface MCSessionHandler : NSObject <MCSessionPrivateDelegate>

@property (nonatomic) void *protocolLayer;
@property (retain, nonatomic) MCSession *session;
@property (retain, nonatomic) NSMutableDictionary *peersToHandles;
@property (retain, nonatomic) NSMutableArray *pendingData;
@property (retain, nonatomic) NSLock *handlesLock;
@property (nonatomic) struct DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle>> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; void *m_data; } handles;
@property (nonatomic) struct DynamicArray<unsigned char> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; char *m_data; } tempBuf;
@property (weak, nonatomic) id<MCSessionPrivateDelegate> nextDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4 propagate:(BOOL *)a5;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2 propagate:(BOOL *)a3;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3 propagate:(BOOL *)a4;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3 propagate:(BOOL *)a4;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2 propagate:(BOOL *)a3;
- (id)dataForPacket:(const void *)a0 channel:(unsigned char)a1;
- (id)initWithSession:(id)a0 protocolLayer:(void *)a1;

@end
