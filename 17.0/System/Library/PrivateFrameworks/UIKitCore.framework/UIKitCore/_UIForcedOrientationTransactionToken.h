@class NSString;
@protocol _UIForcedOrientationTransactionHandler;

@interface _UIForcedOrientationTransactionToken : NSObject <BSDebugDescriptionProviding, _UIOrientationDebugDescriptionProviding>

@property (copy, nonatomic) id /* block */ commitCompletionBlock;
@property (weak, nonatomic) id<_UIForcedOrientationTransactionHandler> transactionHandler;
@property (readonly, nonatomic) long long originalInterfaceOrientation;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *transactionReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (void)commitAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (id)_orientationDebugDescription;
- (id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_orientationDebugDescriptionWithMultilinePrefix:(id)a0;
- (void)didCommitOrientation;
- (id)initWithOriginalOrientation:(long long)a0 handler:(id)a1 reason:(id)a2;

@end
