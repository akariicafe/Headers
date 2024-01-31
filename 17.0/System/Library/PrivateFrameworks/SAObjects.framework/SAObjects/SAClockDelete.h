@class NSArray;

@interface SAClockDelete : SADomainCommand

@property (copy, nonatomic) NSArray *clockIds;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
