@class NFSecureElementManagerSession, NFHardwareSecureElementInfo;

@interface NFSecureElementReaderProxyListener : NSObject <STSRemoteTransceiverProtocol>

@property (retain, nonatomic) NFSecureElementManagerSession *seSession;
@property (retain, nonatomic) NFHardwareSecureElementInfo *seInfo;

- (void).cxx_destruct;
- (id)transceiveWithData:(id)a0 outError:(id *)a1;
- (id)initWithSTSReaderSession:(id)a0;

@end
