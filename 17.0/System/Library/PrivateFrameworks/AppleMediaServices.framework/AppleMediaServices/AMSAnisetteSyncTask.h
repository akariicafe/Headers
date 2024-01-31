@class NSData, ACAccount;
@protocol AMSBagProtocol;

@interface AMSAnisetteSyncTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 type:(long long)a1 account:(id)a2 bag:(id)a3;
- (id)performSync;

@end
