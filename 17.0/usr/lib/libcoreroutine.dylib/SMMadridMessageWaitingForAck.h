@class NSString, SMHandle, NSDate;

@interface SMMadridMessageWaitingForAck : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long messageType;
@property (copy, nonatomic) id callback;
@property (retain, nonatomic) NSDate *messageSentDate;
@property (nonatomic) long long pendingRetryCount;
@property (retain, nonatomic) SMHandle *handle;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 messageType:(unsigned long long)a1 messageSentDate:(id)a2 pendingRetryCount:(long long)a3 handle:(id)a4 callback:(id)a5;

@end
