@interface WebAccessibilityObjectWrapperBase : NSObject {
    struct WeakPtr<WebCore::AccessibilityObject, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_axObject;
}

@property (nonatomic) struct ObjectIdentifierGeneric<WebCore::AXIDType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } identifier;

+ (void)accessibilitySetShouldRepostNotifications:(BOOL)a0;

- (void)detach;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)innerHTML;
- (id)accessibilityCustomContent;
- (id)attachmentView;
- (id)accessibilityMathPrescriptPairs;
- (void)attachAXObject:(void *)a0;
- (void *)axBackingObject;
- (id)_accessibilityWebDocumentView;
- (BOOL)_prepareAccessibilityCall;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (void)accessibilityPostedNotification:(id)a0;
- (void)accessibilityPostedNotification:(id)a0 userInfo:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (id)ariaLandmarkRoleDescription;
- (id)baseAccessibilityHelpText;
- (id)baseAccessibilityResolvedEditingStyles;
- (id)baseAccessibilitySpeechHint;
- (void *)baseUpdateBackingStore;
- (struct CGPath { } *)convertPathToScreenSpace:(const void *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToSpace:(const struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } *)a0 space:(int)a1;
- (id)initWithAccessibilityObject:(void *)a0;
- (BOOL)isIsolatedObject;
- (id)lineRectsAndText;
- (id)outerHTML;

@end
