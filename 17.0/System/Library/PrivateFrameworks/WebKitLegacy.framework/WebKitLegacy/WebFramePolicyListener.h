@class NSString;

@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
    struct RefPtr<WebCore::LocalFrame, WTF::RawPtrTraits<WebCore::LocalFrame>, WTF::DefaultRefDerefTraits<WebCore::LocalFrame>> { struct LocalFrame *m_ptr; } _frame;
    struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } m_object; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } m_processIdentifier; } _identifier;
    struct Function<void (WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>>>> { void *__value_; } __ptr_; } m_callableWrapper; } _policyFunction;
    struct RetainPtr<NSURL> { void *m_ptr; } _appLinkURL;
    struct RetainPtr<NSURL> { void *m_ptr; } _referrerURL;
    unsigned char _defaultPolicy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)continue;
- (void)invalidate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)download;
- (void)use;
- (void)ignore;
- (id)initWithFrame:(struct NakedPtr<WebCore::LocalFrame> { struct LocalFrame *x0; })a0 identifier:(struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; } x0; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; } x1; })a1 policyFunction:(void *)a2 defaultPolicy:(unsigned char)a3;
- (id)initWithFrame:(struct NakedPtr<WebCore::LocalFrame> { struct LocalFrame *x0; })a0 identifier:(struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PolicyCheckIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; } x0; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x0; } x1; })a1 policyFunction:(void *)a2 defaultPolicy:(unsigned char)a3 appLinkURL:(id)a4 referrerURL:(id)a5;
- (void)receivedPolicyDecision:(unsigned char)a0;

@end
