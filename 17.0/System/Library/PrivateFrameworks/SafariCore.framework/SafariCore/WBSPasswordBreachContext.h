@class WBSPasswordBreachCryptographicOperations, WBSPasswordBreachStore, WBSPasswordBreachConfiguration;

@interface WBSPasswordBreachContext : NSObject

@property (readonly, nonatomic) WBSPasswordBreachConfiguration *configuration;
@property (readonly, nonatomic) WBSPasswordBreachCryptographicOperations *cryptographicOperations;
@property (readonly, nonatomic) WBSPasswordBreachStore *store;

- (id)initWithConfiguration:(id)a0 store:(id)a1;
- (void).cxx_destruct;

@end
