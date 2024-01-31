@class NSString;

@interface SAScreenActionActivateUIElement : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *elementId;

+ (id)activateUIElementWithDictionary:(id)a0 context:(id)a1;
+ (id)activateUIElement;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
