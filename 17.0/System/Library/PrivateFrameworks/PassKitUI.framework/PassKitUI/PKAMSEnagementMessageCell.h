@class PKDashboardPassMessage, NSString, AMSUIDashboardMessageViewController;

@interface PKAMSEnagementMessageCell : UITableViewCell <AMSUIMessageViewControllerDelegate> {
    AMSUIDashboardMessageViewController *_dashboardMessageController;
}

@property (retain, nonatomic) PKDashboardPassMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)prepareForReuse;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)displayDialogRequest:(id)a0;
- (BOOL)messageViewController:(id)a0 shouldEnqueueMetricsForDialogResult:(id)a1;
- (void)messageViewControllerDidDismiss:(id)a0;

@end
