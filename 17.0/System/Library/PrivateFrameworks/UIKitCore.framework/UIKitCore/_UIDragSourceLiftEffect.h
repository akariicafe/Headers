@class NSString, NSMapTable;
@protocol UITimingCurveProvider;

@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect> {
    NSMapTable *_liftOperationByContext;
}

@property (nonatomic) BOOL scrollCancelling;
@property (readonly, nonatomic) id<UITimingCurveProvider> liftTimingParameters;
@property (readonly, nonatomic) double liftAnimationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_installInteractionPlattersForOperation:(id)a0;
- (void)_uninstallInteractionPlattersForOperation:(id)a0;
- (id)existingOperationForContext:(id)a0;
- (void).cxx_destruct;
- (void)_setInteractionEffectsLifted:(BOOL)a0 withOperation:(id)a1;
- (id)reversedTimingParametersForTimingParameters:(id)a0;
- (void)interaction:(id)a0 didChangeWithContext:(id)a1;
- (void)_addworkaroundForPropertyAnimator:(id)a0 inView:(id)a1;

@end
