@class NSString, NSMutableArray, UIView;
@protocol _UIAssertion;

@interface _UIClientToHostRelationshipGestureInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>

@property (retain, nonatomic) id<_UIAssertion> pointerUpdatePauseAssertion;
@property (readonly, copy, nonatomic) NSString *hostIdentifier;
@property (readonly, nonatomic) NSMutableArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

+ (id)_hostGestureRecognizersForFailureRelationshipsWithIdentifier:(id)a0;
+ (void)dispatchGestureRecognizerStateChange:(long long)a0 toHostGestureWithIdentifier:(id)a1;
+ (id)hostGestureRecognizerForFailureRelationshipsWithIdentifier:(id)a0;

- (void)didMoveToView:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)removeGestureRecognizer:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (void)addGestureRecognizer:(id)a0;
- (void)_wrappedRecognizerDidRecognize:(id)a0;
- (void)_invalidatePointerPauseAssertion;
- (id)initWithHostIdentifier:(id)a0;

@end
