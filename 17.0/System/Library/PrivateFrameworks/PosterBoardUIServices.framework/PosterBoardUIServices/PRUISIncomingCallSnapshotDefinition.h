@class PRUISIncomingCallPosterContext;

@interface PRUISIncomingCallSnapshotDefinition : PRPosterSnapshotDefinition {
    PRUISIncomingCallPosterContext *_context;
}

- (void).cxx_destruct;
- (id)initWithBaseIdentifier:(id)a0 context:(id)a1 attachmentUniqueIdentifiers:(id)a2;
- (void)applySceneSettings:(id)a0;

@end
