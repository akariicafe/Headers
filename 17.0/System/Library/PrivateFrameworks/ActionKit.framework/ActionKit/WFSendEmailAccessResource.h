@interface WFSendEmailAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)associatedAppIdentifier;

@end
