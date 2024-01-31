@interface WKPaymentAuthorizationDelegate : NSObject {
    struct RetainPtr<PKPaymentRequest> { void *m_ptr; } _request;
    struct WeakPtr<WebKit::PaymentAuthorizationPresenter, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _presenter;
    struct RetainPtr<NSArray<PKPaymentSummaryItem *>> { void *m_ptr; } _summaryItems;
    struct RetainPtr<PKShippingMethods> { void *m_ptr; } _availableShippingMethods;
    struct RetainPtr<NSError> { void *m_ptr; } _sessionError;
    struct BlockPtr<void (PKPaymentAuthorizationResult *)> { id /* block */ m_block; } _didAuthorizePaymentCompletion;
    struct BlockPtr<void (PKPaymentMerchantSession *, NSError *)> { id /* block */ m_block; } _didRequestMerchantSessionCompletion;
    struct BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)> { id /* block */ m_block; } _didSelectPaymentMethodCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingContactUpdate *)> { id /* block */ m_block; } _didSelectShippingContactCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)> { id /* block */ m_block; } _didSelectShippingMethodCompletion;
    struct BlockPtr<void (PKPaymentRequestCouponCodeUpdate *)> { id /* block */ m_block; } _didChangeCouponCodeCompletion;
}

- (void)invalidate;
- (id).cxx_construct;
- (void)_didFinish;
- (void).cxx_destruct;
- (void)_getPaymentServicesMerchantURL:(id /* block */)a0;
- (void)completePaymentMethodSelection:(id)a0;
- (void)_didAuthorizePayment:(id)a0 completion:(id /* block */)a1;
- (void)_didChangeCouponCode:(id)a0 completion:(id /* block */)a1;
- (void)_didRequestMerchantSession:(id /* block */)a0;
- (void)_didSelectPaymentMethod:(id)a0 completion:(id /* block */)a1;
- (void)_didSelectShippingContact:(id)a0 completion:(id /* block */)a1;
- (void)_didSelectShippingMethod:(id)a0 completion:(id /* block */)a1;
- (id)_initWithRequest:(id)a0 presenter:(void *)a1;
- (void)_willFinishWithError:(id)a0;
- (void)completeCouponCodeChange:(id)a0;
- (void)completeMerchantValidation:(id)a0 error:(id)a1;
- (void)completePaymentSession:(long long)a0 errors:(id)a1;
- (void)completePaymentSession:(long long)a0 errors:(id)a1 orderDetails:(id)a2;
- (void)completeShippingContactSelection:(id)a0;
- (void)completeShippingMethodSelection:(id)a0;

@end
