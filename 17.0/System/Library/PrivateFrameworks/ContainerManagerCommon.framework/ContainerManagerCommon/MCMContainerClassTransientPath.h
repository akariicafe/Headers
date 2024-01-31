@interface MCMContainerClassTransientPath : MCMContainerClassPath

+ (id)_temporaryComponent;
+ (id)containerPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1;
+ (id)transientURLWithUserIdentity:(id)a0 withContainerClass:(unsigned long long)a1;
+ (id)transientGlobalURL;
+ (id)transientGlobalBundleURL;
+ (id)_globalTemporaryComponent;

@end
