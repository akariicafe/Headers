@class NSString, NSArray, NSDate, NSNumber;

@interface VSJSResponsePayload : IKJSObject <VSJSResponsePayload, NSCopying>

@property (copy, nonatomic) NSString *authN;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *userMetadata;
@property (copy, nonatomic) NSString *logout;
@property (copy, nonatomic) NSArray *userChannelList;
@property (copy, nonatomic) NSString *authenticationScheme;
@property (copy, nonatomic) NSString *statusCode;
@property (copy, nonatomic) NSNumber *expectedAction;
@property (copy, nonatomic) NSArray *subscriptions;
@property (copy, nonatomic) NSArray *clearSubscriptions;
@property (copy, nonatomic) NSArray *userAccounts;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (nonatomic, getter=isSynchronizable) BOOL synchronizable;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
