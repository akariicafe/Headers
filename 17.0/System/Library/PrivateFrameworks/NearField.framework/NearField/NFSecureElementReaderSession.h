@protocol NFSecureElementReaderSessionDelegate;

@interface NFSecureElementReaderSession : NFSession

@property (weak) id<NFSecureElementReaderSessionDelegate> delegate;

- (BOOL)stop:(id *)a0;
- (BOOL)start:(id *)a0;
- (void)didEndUnexpectedly;
- (void).cxx_destruct;
- (BOOL)connectTag:(id)a0 error:(id *)a1;
- (BOOL)stopVASPolling:(id *)a0;
- (void)didDetectTags:(id)a0;
- (void)didEndSecureElementReader:(id)a0;
- (void)didReceiveThermalIndication:(BOOL)a0;
- (void)didStartSecureElementReader:(id)a0;
- (BOOL)disconnectTag:(id *)a0;
- (BOOL)performGetVASDataWithRequestList:(id)a0 responseList:(id)a1 error:(id *)a2;
- (BOOL)performSelectVAS:(id)a0 error:(id *)a1;
- (id)performVAS:(id)a0 error:(id *)a1;
- (void)receivedSecureElementReaderData:(id)a0 forApplet:(id)a1;
- (id)selectApplets:(id)a0;
- (BOOL)selectApplets:(id)a0 error:(id *)a1;
- (id)startSecureElementReader;
- (BOOL)startVASPolling:(id)a0 error:(id *)a1;
- (id)stopSecureElementReader;
- (id)transceive:(id)a0 error:(id *)a1;

@end
