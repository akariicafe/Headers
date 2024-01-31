@class DADClient, NSString;

@interface DADClientDelegate : DADisableableObject

@property (weak, nonatomic) DADClient *client;
@property (retain, nonatomic) NSString *accountID;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL consumerCancelled;
@property (retain, nonatomic) NSString *delegateID;

- (void)dealloc;
- (void)disable;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithAccountID:(id)a0 client:(id)a1;
- (void)userRequestsCancel;

@end
