@protocol BLSHTransparentFlipbookProvider;

@interface BLSHTransparentFlipbookAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    id<BLSHTransparentFlipbookProvider> _provider;
}

+ (id)registerHandlerForService:(id)a0 provider:(id)a1;
+ (id)attributeClasses;
+ (Class)attributeBaseClass;

- (void)activateWithFirstEntry:(id)a0;
- (id)initForService:(id)a0 provider:(id)a1;
- (void)deactivateWithFinalEntry:(id)a0;
- (void).cxx_destruct;

@end
