@class NSLock, NSMutableArray, NSObject;
@protocol OS_os_log, B2PEngineDelegate;

@interface B2PEngine : NSObject {
    id<B2PEngineDelegate> _delegate;
    unsigned char _b2pReceiveBuffer[65536];
    unsigned char _b2pLinkLinearBuffer[65536];
    unsigned char _b2pTransmitBuffer[262144];
    struct { unsigned char cb[200]; struct { unsigned int response_timeouts; unsigned int midpacket_timeouts; unsigned int tx_packet_retry_cnt; unsigned int max_tx_level; unsigned int rx_packet_cnt; unsigned int rx_packet_err_cnt; unsigned int tx_packet_cnt; } dbg_stats; void *client_context; } _b2pContext;
    NSMutableArray *_scheduledTimers;
    NSLock *_b2pLock;
    NSObject<OS_os_log> *_log;
    int _category;
}

@property int debugLevel;

- (BOOL)sendResponse:(id)a0;
- (void)dealloc;
- (void)lock;
- (void)timerFired:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)resetWithReason:(int)a0;
- (void)receiveData:(id)a0;
- (int)sendData:(id)a0;
- (BOOL)sendCommand:(id)a0;
- (void)setMaxTransmitAttempts:(unsigned char)a0;
- (id)b2pTimerForNSTimer:(id)a0;
- (void)inputCommandResponseWithOpCode:(unsigned short)a0 status:(int)a1 data:(id)a2;
- (id)inputCommandWithOpCode:(unsigned short)a0 data:(id)a1;
- (BOOL)startPacketDumperWithFileName:(id)a0 productID:(unsigned short)a1 dataSessionProtocol:(unsigned char)a2;
- (void)startTimerType:(int)a0 deadlineMS:(unsigned int)a1;
- (void)stopTimerType:(int)a0;

@end
