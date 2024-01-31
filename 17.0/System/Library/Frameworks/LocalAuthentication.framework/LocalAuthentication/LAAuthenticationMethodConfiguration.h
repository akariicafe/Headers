@class NSArray, LAContext;

@interface LAAuthenticationMethodConfiguration : NSObject

@property (readonly, nonatomic) NSArray *allowedUsers;
@property (readonly, nonatomic) LAContext *authenticationContext;

- (void).cxx_destruct;
- (id)initWithAllowedUsers:(id)a0 authenticationContext:(id)a1;

@end
