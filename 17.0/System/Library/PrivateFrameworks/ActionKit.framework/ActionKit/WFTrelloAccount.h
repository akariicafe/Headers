@class NSString;

@interface WFTrelloAccount : WFAccount

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *email;

+ (id)serviceID;
+ (id)serviceName;
+ (id)localizedServiceName;
+ (id)accountWithToken:(id)a0;

- (BOOL)isValid;
- (id)localizedName;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
