@class NSString;

@interface _WKAppInstallCoordinatorObserver : NSObject <IXAppInstallCoordinatorObserver>

@property struct WeakPtr<WebPushD::ICAppBundle, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } bundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)coordinator:(id)a0 canceledWithReason:(id)a1 client:(unsigned long long)a2;
- (void)coordinatorDidCompleteSuccessfully:(id)a0 forApplicationRecord:(id)a1;
- (id)initWithICAppBundle:(void *)a0;

@end
