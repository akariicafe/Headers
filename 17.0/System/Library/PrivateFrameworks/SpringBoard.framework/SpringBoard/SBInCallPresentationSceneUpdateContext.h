@class NSString;

@interface SBInCallPresentationSceneUpdateContext : NSObject

@property (copy, nonatomic) NSString *analyticsSource;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (nonatomic) long long executionTarget;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ postSceneUpdateHandler;
@property (copy, nonatomic) id /* block */ transitionRequestBuilderBlock;
@property (copy, nonatomic) id /* block */ validatorHandler;

- (void).cxx_destruct;
- (id)initWithReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 analyticsSource:(id)a1 transitionRequestBuilderBlock:(id /* block */)a2;

@end
