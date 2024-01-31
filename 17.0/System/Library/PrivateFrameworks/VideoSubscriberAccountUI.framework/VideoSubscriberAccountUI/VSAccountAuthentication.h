@class NSString, VSOptional;

@interface VSAccountAuthentication : NSObject

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) VSOptional *authenticationToken;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (nonatomic, getter=isSynchronizable) BOOL synchronizable;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
