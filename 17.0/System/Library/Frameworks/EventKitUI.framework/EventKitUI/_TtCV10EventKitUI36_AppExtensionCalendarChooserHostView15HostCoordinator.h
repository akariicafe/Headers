@interface _TtCV10EventKitUI36_AppExtensionCalendarChooserHostView15HostCoordinator : NSObject <_EXHostViewControllerDelegate, EKCalendarChooserViewHostInterface> {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ identity;
    void /* unknown type, empty encoding */ conn;
    void /* unknown type, empty encoding */ configurationChangedPublisherSink;
}

- (id)init;
- (void).cxx_destruct;
- (void)calendarSelectionChanged:(id)a0 constraintsDictionary:(id)a1 allSelected:(BOOL)a2;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)requestPresentViewWithName:(id)a0 viewID:(id)a1 presentationStyle:(long long)a2;

@end
