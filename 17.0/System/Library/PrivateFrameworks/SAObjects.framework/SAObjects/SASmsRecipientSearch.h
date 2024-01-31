@class NSArray;

@interface SASmsRecipientSearch : SADomainCommand

@property (nonatomic) BOOL clientShouldResolvePhonesAndEmails;
@property (copy, nonatomic) NSArray *recipients;

+ (id)recipientSearch;
+ (id)recipientSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
