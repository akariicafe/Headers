@class NSString, SBAssistantController;

@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken <SBAssistantObserver>

@property (readonly, nonatomic) SBAssistantController *assistantController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (long long)state;
- (void)assistantWillAppear:(id)a0 windowScene:(id)a1;
- (void)assistantDidDisappear:(id)a0 windowScene:(id)a1;
- (void)assistantDidAppear:(id)a0 windowScene:(id)a1;
- (void).cxx_destruct;
- (void)assistantWillDisappear:(id)a0 windowScene:(id)a1;
- (id)initWithAssistantController:(id)a0 scene:(id)a1;

@end
