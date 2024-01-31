@interface SAUIPaginateList : SABaseClientBoundCommand

@property (nonatomic) BOOL forward;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
