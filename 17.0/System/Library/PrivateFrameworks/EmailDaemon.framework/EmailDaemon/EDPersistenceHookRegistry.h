@class NSString, NSObject;
@protocol OS_os_log;

@interface EDPersistenceHookRegistry : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct __CFDictionary { } *_hookRespondersBySelector;
    struct __CFDictionary { } *_methodSignaturesBySelector;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_proxiedProtocols;

- (void)_forwardStackInvocation:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)registerDatabaseChangeHookResponder:(id)a0;
- (void)registerMessageChangeHookResponder:(id)a0;
- (void)registerProtectedDataReconciliationHookResponder:(id)a0;
- (void)unregisterAllHookResponders;
- (id)_copyRespondersForSelector:(SEL)a0;
- (void)_initializeMethodSignatures;
- (void)_messageRespondersWithInvocation:(id)a0;
- (void)_registerHookResponder:(id)a0 protocol:(id)a1;
- (void)_registerHookResponder:(id)a0 withMethodDescription:(struct objc_method_description { SEL x0; char *x1; })a1;
- (void)_registerSelector:(struct objc_method_description { SEL x0; char *x1; })a0;
- (void)registerAccountChangeHookResponder:(id)a0;
- (void)registerActivityHookResponder:(id)a0;
- (void)registerBrandIndicatorChangeHookResponder:(id)a0;
- (void)registerCloudStorageChangeHookResponder:(id)a0;
- (void)registerMailboxChangeHookResponder:(id)a0;
- (void)registerMessageDeliveryHookResponder:(id)a0;
- (void)registerMessageReadHookResponder:(id)a0;
- (void)registerOneTimeCodeChangeHookResponder:(id)a0;
- (void)registerSearchableIndexHookResponder:(id)a0;
- (void)registerSenderBucketChangeHookResponder:(id)a0;
- (void)registerThreadChangeHookResponder:(id)a0;
- (void)unregisterHookResponder:(id)a0;

@end
