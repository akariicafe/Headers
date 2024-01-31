@class NSString, _SBPrototypeBasicAlertElementCompoundView, UIView;
@protocol SAAlertHosting, SAElementHosting, SAElement;

@interface SBPrototypeBasicAlertElementViewProvider : NSObject <SAElement, SAAlertBehavior, SAUIElementViewProviding> {
    _SBPrototypeBasicAlertElementCompoundView *_minimalCompoundView;
}

@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SAAlertHosting> alertHost;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) id<SAElement> element;
@property (nonatomic) unsigned long long layoutAxis;

- (id)viewProvider;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (BOOL)handleElementViewEvent:(long long)a0;
- (BOOL)hasAlertBehavior;

@end
