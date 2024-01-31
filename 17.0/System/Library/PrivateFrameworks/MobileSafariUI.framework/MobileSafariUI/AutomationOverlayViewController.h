@class NSString;
@protocol AutomationOverlayViewControllerDelegate;

@interface AutomationOverlayViewController : UIViewController <AutomationOverlayWindowDelegate> {
    id<AutomationOverlayViewControllerDelegate> _delegate;
    BOOL _allowsUserInteraction;
    id /* block */ _resetTemporaryUserInteractionAllowedBlock;
}

@property (readonly, nonatomic) BOOL allowsUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)loadView;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_interceptUserInteraction;
- (void)_setAllowsUserInteraction:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_toggleAllowsUserInteractionTemporarily:(BOOL)a0;
- (BOOL)automationWindowAllowsUserInteraction:(id)a0;

@end
