@class NSString, NSArray, NSDictionary, NSError;

@interface SLWebUserInfoResponse : NSObject

@property (readonly) long long statusCode;
@property (readonly) NSString *displayName;
@property (readonly) NSString *emailAddress;
@property (readonly) NSArray *emailAddresses;
@property (readonly) NSError *error;
@property (readonly) NSString *errorMessage;
@property (readonly) NSDictionary *userInfo;

- (void)setEmailAddresses:(id)a0;
- (void)setUserInfo:(id)a0;
- (void)setDisplayName:(id)a0;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)setErrorMessage:(id)a0;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end
