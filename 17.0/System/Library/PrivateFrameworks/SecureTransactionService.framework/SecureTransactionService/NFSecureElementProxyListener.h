@class NFSecureElementManagerSession;

@interface NFSecureElementProxyListener : NSObject <STSRemoteTransceiverProtocol>

@property (retain, nonatomic) NFSecureElementManagerSession *seSession;

- (void).cxx_destruct;
- (id)initWithSTSSession:(id)a0;
- (id)transceiveWithData:(id)a0 outError:(id *)a1;

@end
