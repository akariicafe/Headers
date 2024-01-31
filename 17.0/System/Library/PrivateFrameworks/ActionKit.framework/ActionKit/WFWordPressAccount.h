@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount

@property (copy, nonatomic) NSURL *endpointURL;

+ (unsigned long long)modelVersion;
+ (id)serviceID;
+ (id)serviceName;
+ (id)localizedServiceName;
+ (void)loginWithUsername:(id)a0 password:(id)a1 blogURL:(id)a2 completionHandler:(id /* block */)a3;
+ (id)accountWithUsername:(id)a0 password:(id)a1 endpointURL:(id)a2;
+ (BOOL)allowsMultipleAccounts;

- (BOOL)isValid;
- (id)localizedName;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(id /* block */)a0;
- (id)decodeValueForKey:(id)a0 withCoder:(id)a1 modelVersion:(unsigned long long)a2;

@end
