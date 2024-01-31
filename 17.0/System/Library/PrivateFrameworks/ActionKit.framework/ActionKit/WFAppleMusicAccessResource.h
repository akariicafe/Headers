@interface WFAppleMusicAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (void)dealloc;
- (unsigned long long)status;
- (id)initWithDefinition:(id)a0;
- (id)associatedAppIdentifier;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
