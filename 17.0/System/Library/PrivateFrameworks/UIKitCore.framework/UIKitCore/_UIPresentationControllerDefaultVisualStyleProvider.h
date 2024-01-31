@class _UIPresentationControllerNullVisualStyleProvider, NSMutableDictionary, NSString, _UISheetPresentationMetrics;

@interface _UIPresentationControllerDefaultVisualStyleProvider : NSObject <_UIPresentationControllerVisualStyleProviding>

@property (retain, nonatomic) NSMutableDictionary *providerByIdiom;
@property (retain, nonatomic) _UIPresentationControllerNullVisualStyleProvider *fallbackProvider;
@property (readonly, nonatomic) _UISheetPresentationMetrics *defaultSheetMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)styleForAlertPresentationController:(id)a0;
- (Class)presentationControllerClassForModalPresentationStyle:(long long)a0 inIdiom:(long long)a1;
- (id)_init;
- (void)registerVisualStyleProvider:(id)a0 forIdiom:(long long)a1;
- (id)styleForSearchPresentationController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 inIdiom:(long long)a1;
- (long long)defaultConcreteTransitionStyleForViewController:(id)a0;
- (long long)defaultConcretePresentationStyleForViewController:(id)a0;
- (id)_providerForIdiom:(long long)a0;
- (id)_providerForViewController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0;
- (void).cxx_destruct;
- (id)styleForRootPresentationController:(id)a0;
- (id)_providerForPresentationController:(id)a0;
- (id)defaultStyleForPresentationController:(id)a0;
- (id)styleForSheetPresentationController:(id)a0;
- (id)styleForPopoverPresentationController:(id)a0;

@end
