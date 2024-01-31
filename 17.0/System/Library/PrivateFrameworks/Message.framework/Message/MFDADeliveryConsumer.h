@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer>

@property (retain, nonatomic) MFError *error;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) unsigned long long bytesRead;
@property (readonly, nonatomic) unsigned long long bytesWritten;

- (void).cxx_destruct;
- (void)actionFailed:(long long)a0 forTask:(id)a1 error:(id)a2;
- (void)messageDidSendWithContext:(id)a0 sentBytesCount:(unsigned long long)a1 receivedBytesCount:(unsigned long long)a2;

@end
