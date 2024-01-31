@class NSString;

@interface SASmsGroupSearch : SADomainCommand

@property (copy, nonatomic) NSString *smsGroupName;

+ (id)groupSearch;
+ (id)groupSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
