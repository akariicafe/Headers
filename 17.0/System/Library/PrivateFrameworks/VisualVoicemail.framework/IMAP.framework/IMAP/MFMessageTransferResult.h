@class NSArray;

@interface MFMessageTransferResult : NSObject

@property (readonly, nonatomic) unsigned long long resultCode;
@property (readonly, nonatomic) NSArray *failedMessages;
@property (readonly, nonatomic) NSArray *transferedMessages;

- (void)dealloc;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithResultCode:(unsigned long long)a0 failedMessages:(id)a1 transferedMessage:(id)a2;

@end
