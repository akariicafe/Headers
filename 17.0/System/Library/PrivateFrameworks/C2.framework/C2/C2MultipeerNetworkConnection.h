@class NSMutableData, NSObject;
@protocol OS_nw_connection;

@interface C2MultipeerNetworkConnection : C2MultipeerConnection

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (nonatomic) int connectionState;
@property (retain, nonatomic) NSMutableData *receiveLengthBuffer;
@property (retain, nonatomic) NSMutableData *receiveMessageBuffer;

- (void)startConnection;
- (void).cxx_destruct;
- (void)stopConnection;
- (id)initWithParent:(id)a0 queue:(id)a1 connection:(id)a2 peerID:(id)a3;
- (void)receiveNextMessage;
- (void)sendMessageWithData:(id)a0 completionHandler:(id /* block */)a1;

@end
