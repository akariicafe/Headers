@class NSString;
@protocol CNFRegAccountAuthorizationDelegate;

@interface CNFRegAccountAuthorizationController : CNFRegAccountWebViewController

@property (copy, nonatomic) NSString *authID;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) id<CNFRegAccountAuthorizationDelegate> delegate;

- (void)dealloc;
- (id)bagKey;
- (void).cxx_destruct;
- (id)logName;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (id)initWithRegController:(id)a0 authID:(id)a1 token:(id)a2;

@end
