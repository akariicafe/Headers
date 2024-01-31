@class NSURLResponse, NSData, NSError, NWConcrete_nw_connection, NSMutableArray;

@interface NWURLSessionWebSocketTask : NWURLSessionTask {
    BOOL _receiving;
    unsigned short _pingSeed;
    long long _closeCode;
    NSData *_closeReason;
    NSURLResponse *_storedResponse;
    NWConcrete_nw_connection *_upgradedConnection;
    NSMutableArray *_pendingWork;
    NSError *_pendingError;
    NSMutableArray *_pendingReceiveCompletionHandlers;
}

@property (nonatomic) long long maximumMessageSize;
@property (readonly, nonatomic) long long closeCode;
@property (readonly, copy, nonatomic) NSData *closeReason;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)receiveMessageWithCompletionHandler:(id /* block */)a0;
- (id)response;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)_sendCloseCode:(long long)a0 reason:(id)a1;
- (void)cancelWithCloseCode:(long long)a0 reason:(id)a1;
- (void)sendPingWithPongReceiveHandler:(id /* block */)a0;
- (void)completeTaskWithError:(id)a0;
- (void)startNextLoad:(BOOL)a0;

@end
