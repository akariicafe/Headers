@class NSArray;

@interface SATimerDismiss : SADomainCommand

@property (copy, nonatomic) NSArray *timerIds;

+ (id)dismiss;
+ (id)dismissWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
