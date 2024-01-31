@class NSMutableDictionary;

@interface ENCredentialStore : NSObject <NSCoding>

@property (retain, nonatomic) NSMutableDictionary *store;

+ (id)loadCredentialsFromAppDefaults;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)clearAllCredentials;
- (id)initWithCoder:(id)a0;
- (void)addCredentials:(id)a0;
- (id)credentialsForHost:(id)a0;
- (void)removeCredentials:(id)a0;

@end
