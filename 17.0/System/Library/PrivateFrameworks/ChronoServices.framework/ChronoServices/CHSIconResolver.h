@interface CHSIconResolver : NSObject <CHSIconResolving> {
    void /* unknown type, empty encoding */ iconStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)resolveIconForContainerIdentity:(id)a0 completion:(id /* block */)a1;
- (id)resolveIconVersionForExtensionIdentity:(id)a0;

@end
