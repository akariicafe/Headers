@interface SAFmfVisibilityStateSet : SADomainCommand

@property (nonatomic) BOOL visible;

+ (id)visibilityStateSet;
+ (id)visibilityStateSetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
