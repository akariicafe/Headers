@class SBAlertItem, NSString, NSObject;
@protocol UIAlertControllerVisualStyleProviding, _SBAlertControllerDelegate;

@interface _SBAlertController : UIAlertController <BSDescriptionProviding> {
    NSObject<UIAlertControllerVisualStyleProviding> *_styleProvider;
}

@property (weak, nonatomic) SBAlertItem *alertItem;
@property (weak, nonatomic) id<_SBAlertControllerDelegate> alertControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_styleProvider;
- (id)initWithStyleProvider:(id)a0;
- (void)setHiddenOnClonedDisplay:(BOOL)a0;

@end
