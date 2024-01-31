@class PREditingStandaloneLabelView, NSString;

@interface PREditingStandaloneLabelViewInteractiveTransition : NSObject <PREditingStandaloneLabelViewTransitioning, BSDescriptionStreamable>

@property (readonly, weak, nonatomic) PREditingStandaloneLabelView *label;
@property (readonly, copy, nonatomic) NSString *currentText;
@property (readonly, copy, nonatomic) NSString *transitionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateInteractiveTransition:(double)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 currentText:(id)a1 transitionText:(id)a2;

@end
