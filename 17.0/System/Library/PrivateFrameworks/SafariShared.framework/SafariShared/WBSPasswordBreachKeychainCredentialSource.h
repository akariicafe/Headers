@class NSArray;

@interface WBSPasswordBreachKeychainCredentialSource : NSObject <WBSPasswordBreachCredentialSource>

@property (readonly, nonatomic) NSArray *credentials;

- (id)savedAccountsForPersistentIdentifiers:(id)a0;

@end
