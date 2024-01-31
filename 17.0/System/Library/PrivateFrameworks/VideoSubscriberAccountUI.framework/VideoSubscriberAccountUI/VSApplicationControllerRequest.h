@class NSString, NSArray;

@interface VSApplicationControllerRequest : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *authenticationToken;
@property (copy, nonatomic) NSString *SAMLRequest;
@property (copy, nonatomic) NSArray *attributeNames;
@property (copy, nonatomic) NSString *requestorVerificationToken;

- (void).cxx_destruct;

@end
