@class NSString, ACAccount;

@interface AAAuthenticateRequest : AARequest

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *authToken;
@property (retain, nonatomic) ACAccount *account;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)urlCredential;
- (id)initWithUsername:(id)a0 password:(id)a1;
- (id)initWithURLString:(id)a0 username:(id)a1 password:(id)a2;

@end
