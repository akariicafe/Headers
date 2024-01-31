@class NSString, VCTextReceiver, VCTextTransmitter;
@protocol VCTextReceiverDelegate;

@interface VCTextStream : VCMediaStream <VCTextSender, VCTextReceiverDelegate> {
    VCTextReceiver *_textReceiver;
    VCTextTransmitter *_textTransmitter;
    id<VCTextReceiverDelegate> _receiveDelegate;
}

@property (nonatomic) id<VCTextReceiverDelegate> receiveDelegate;
@property (readonly, nonatomic) double lastReceivedRTPPacketTime;
@property (readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)terminateProcess:(id)a0 terminateSource:(id)a1 agent:(struct opaqueRTCReporting { } *)a2;

- (id)init;
- (void)dealloc;
- (void)didReceiveText:(id)a0;
- (void)onCallIDChanged;
- (void)didReceiveCharacter:(unsigned short)a0;
- (BOOL)onConfigureStreamWithConfiguration:(id)a0 error:(id *)a1;
- (void)onPauseWithCompletionHandler:(id /* block */)a0;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(id /* block */)a0;
- (void)onSendRTCPPacket;
- (void)onStartWithCompletionHandler:(id /* block */)a0;
- (void)onStopWithCompletionHandler:(id /* block */)a0;
- (double)rtcpHeartbeatLeeway;
- (void)sendCharacter:(unsigned short)a0;
- (void)sendText:(id)a0;
- (BOOL)setupTextReceiverWithError:(id *)a0;
- (void)setupTextTransmitter;
- (id)supportedPayloads;

@end
