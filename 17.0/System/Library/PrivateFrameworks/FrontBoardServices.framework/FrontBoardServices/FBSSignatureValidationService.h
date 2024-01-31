@class NSString;
@protocol _FBSMISInterfaceWrapper;

@interface FBSSignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {
    id<_FBSMISInterfaceWrapper> _misInterfaceWrapper;
}

@property (nonatomic) BOOL authoritative;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_validateApp:(id)a0;
- (id)init;
- (void)_logTrustState:(unsigned long long)a0 forApp:(id)a1 reason:(id)a2;
- (unsigned int)signatureVersionForApp:(id)a0;
- (id)_initWithMISInterfaceWrapper:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)trustStateForApplication:(id)a0;

@end
