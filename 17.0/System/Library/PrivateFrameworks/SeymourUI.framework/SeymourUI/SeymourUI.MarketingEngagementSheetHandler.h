@interface SeymourUI.MarketingEngagementSheetHandler : NSObject <AMSUIEngagementViewControllerDelegate> {
    void /* unknown type, empty encoding */ placement;
}

- (id)engagementViewController:(id)a0 contentViewWithDictionary:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)engagementViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2;
- (BOOL)engagementViewController:(id)a0 handleDynamicDelegateAction:(id)a1 completionHandler:(id /* block */)a2;
- (void)engagementViewControllerShouldDismiss:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
