@class NSString, ACAccount, NSData;
@protocol AMSBagProtocol;

@interface AMSPushRegisterTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, copy, nonatomic) NSData *token;

- (void).cxx_destruct;
- (id)performTask;
- (id)initWithAccount:(id)a0 token:(id)a1 environment:(id)a2 bag:(id)a3;

@end
