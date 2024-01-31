@class NSString, PKPaymentPassAction;

@interface NPKRemotePassActionRequest : NPKRemotePassAction

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PKPaymentPassAction *action;
@property (readonly, nonatomic) NSString *actionText;

- (id)description;

@end
