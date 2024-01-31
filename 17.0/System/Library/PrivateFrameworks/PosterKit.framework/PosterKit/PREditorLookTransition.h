@class PREditorLookSwitchingComplicationTransition, NSString, PREditingLook;
@protocol CSProminentDisplayTransitioning, PREditorTitleTransitioning, PREditorTitleViewControllerTransitioning, PREditingStandaloneLabelViewTransitioning;

@interface PREditorLookTransition : NSObject <BSDescriptionStreamable>

@property (readonly, copy, nonatomic) PREditingLook *currentLook;
@property (readonly, copy, nonatomic) PREditingLook *destinationLook;
@property (retain, nonatomic) id<PREditorTitleViewControllerTransitioning> titleStyleTransition;
@property (retain, nonatomic) id<PREditorTitleTransitioning> titleScrollingTransition;
@property (retain, nonatomic) id<CSProminentDisplayTransitioning> subtitleStyleTransition;
@property (retain, nonatomic) PREditorLookSwitchingComplicationTransition *complicationTransition;
@property (retain, nonatomic) id<PREditingStandaloneLabelViewTransitioning> lookNameTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateInteractiveTransition:(double)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)initWithCurrentLook:(id)a0 destinationLook:(id)a1;
- (BOOL)matchesCurrentLook:(id)a0 destinationLook:(id)a1;

@end
