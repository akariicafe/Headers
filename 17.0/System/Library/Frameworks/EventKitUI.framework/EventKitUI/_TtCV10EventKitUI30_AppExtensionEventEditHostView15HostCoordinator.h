@interface _TtCV10EventKitUI30_AppExtensionEventEditHostView15HostCoordinator : NSObject <_EXHostViewControllerDelegate, EKEventEditViewHostInterface> {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ identity;
    void /* unknown type, empty encoding */ conn;
    void /* unknown type, empty encoding */ configurationChangedPublisherSink;
}

- (id)init;
- (void).cxx_destruct;
- (void)didCompleteWithAction:(long long)a0 oldToNewObjectIDMap:(id)a1 waitUntilTimestamp:(id)a2 serializedDictionary:(id)a3 objectIDToChangeSetDictionaryMap:(id)a4 objectIDToPersistentDictionaryMap:(id)a5 eventConstraints:(id)a6;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)requestPresentViewWithName:(id)a0 viewID:(id)a1 presentationStyle:(long long)a2;

@end
