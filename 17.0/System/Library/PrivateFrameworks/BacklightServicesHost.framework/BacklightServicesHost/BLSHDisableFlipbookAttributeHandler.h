@protocol BLSHDisableFlipbookProvider;

@interface BLSHDisableFlipbookAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    id<BLSHDisableFlipbookProvider> _provider;
}

+ (id)registerHandlerForService:(id)a0 provider:(id)a1;
+ (id)attributeClasses;
+ (Class)attributeBaseClass;

- (void)activateWithFirstEntry:(id)a0;
- (void)deactivateWithFinalEntry:(id)a0;
- (void).cxx_destruct;

@end
