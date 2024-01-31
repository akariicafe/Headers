@class NSString, NSSet, SMMessage, NSDate;

@interface SMIDSMessageWaitingForAck : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSSet *destinations;
@property (retain, nonatomic) SMMessage *message;
@property (nonatomic) long long pendingRetryCount;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSDate *messageSentDate;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 destinations:(id)a1 message:(id)a2 pendingRetryCount:(long long)a3 messageSentDate:(id)a4 callback:(id /* block */)a5;

@end
