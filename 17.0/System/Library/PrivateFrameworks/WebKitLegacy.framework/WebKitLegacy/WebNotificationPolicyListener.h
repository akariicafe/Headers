@class NSString;

@interface WebNotificationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct CompletionHandler<void (WebCore::NotificationPermission)> { struct Function<void (WebCore::NotificationPermission)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::NotificationPermission>>> { void *__value_; } __ptr_; } m_callableWrapper; } m_function; } _permissionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)allow;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)deny;
- (BOOL)shouldClearCache;
- (void)denyOnlyThisRequest;
- (id)initWithPermissionHandler:(void *)a0;

@end
