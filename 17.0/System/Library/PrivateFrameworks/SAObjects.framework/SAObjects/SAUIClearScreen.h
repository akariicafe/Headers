@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand

@property (retain, nonatomic) SAAceView *initialView;

+ (id)clearScreen;
+ (id)clearScreenWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
