@class NSString, CDPContext;
@protocol CDPDOctagonTrustProxy, CDPDRecoveryKeyValidatorInternalDelegate;

@interface CDPDRecoveryKeyValidatorImpl : NSObject <CDPRecoveryKeyValidatorInternal> {
    CDPContext *_context;
    id<CDPDRecoveryKeyValidatorInternalDelegate> _delegate;
    id<CDPDOctagonTrustProxy> _octagonTrustProxy;
}

@property (nonatomic) BOOL recoveryKeyVerified;
@property (copy, nonatomic) NSString *recoveryKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
