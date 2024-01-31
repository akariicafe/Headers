@class NSString, NSNumber;

@interface HMDXPCMessageCountersLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *peerInformation;
@property (readonly, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSNumber *count;

+ (id)XPCMessageCountersLogEventWithType:(id)a0 peerInformation:(id)a1 messageName:(id)a2 count:(id)a3;

- (void).cxx_destruct;
- (BOOL)shouldSubmit;
- (id)__initWithType:(id)a0 peerInformation:(id)a1 messageName:(id)a2 count:(id)a3;

@end
