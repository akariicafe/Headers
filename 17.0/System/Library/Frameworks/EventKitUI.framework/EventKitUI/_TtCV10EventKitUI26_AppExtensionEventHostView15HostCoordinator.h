@interface _TtCV10EventKitUI26_AppExtensionEventHostView15HostCoordinator : NSObject <_EXHostViewControllerDelegate, EKEventViewHostInterface> {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ identity;
    void /* unknown type, empty encoding */ conn;
    void /* unknown type, empty encoding */ configurationChangedPublisherSink;
}

- (id)init;
- (void).cxx_destruct;
- (void)didCompleteWithAction:(long long)a0;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)requestDismissViewWithName:(id)a0 presentationStyle:(long long)a1;
- (void)requestPresentViewWithName:(id)a0 viewID:(id)a1 presentationStyle:(long long)a2 sourceRect:(id)a3 preferredContentSize:(id)a4 oopContentBackgroundColor:(id)a5;

@end
