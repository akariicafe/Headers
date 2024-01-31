@class NFAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface CAMPreventConnectionHandoverAssertionController : NSObject

@property (retain, nonatomic, setter=_setPreventConnectionHandoverAssertion:) NFAssertion *_preventConnectionHandoverAssertion;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_accessQueue;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_releaseAssertionIfHeld;
- (void)_requestAssertionIfUnheld;
- (void)releaseAssertionIfHeld;
- (void)requestAssertionIfUnheld;

@end
