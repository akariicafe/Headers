@interface SACalendarShowNextEvent : SABaseClientBoundCommand

+ (id)showNextEvent;
+ (id)showNextEventWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
