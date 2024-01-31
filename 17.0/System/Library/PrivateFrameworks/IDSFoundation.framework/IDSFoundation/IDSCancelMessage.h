@class NSString;

@interface IDSCancelMessage : IDSMessage

@property (retain, nonatomic) NSString *fromID;
@property (retain, nonatomic) NSString *queueOneIdentifier;

- (long long)command;
- (id)description;
- (void).cxx_destruct;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueueOneIdentifier:(id)a0 fromID:(id)a1;

@end
