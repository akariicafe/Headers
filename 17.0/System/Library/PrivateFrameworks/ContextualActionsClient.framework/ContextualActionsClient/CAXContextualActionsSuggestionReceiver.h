@class NSString, NSXPCListener, CAXSuggestionProvider;

@interface CAXContextualActionsSuggestionReceiver : NSObject <CAXContextualActionsXPCInterface, NSXPCListenerDelegate> {
    NSXPCListener *_xpcListener;
    CAXSuggestionProvider *_suggestionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void)donateSessionSummary:(id)a0;
- (void)processShortcutsActionSelectionGivenFeedbackEvent:(id)a0 completion:(id /* block */)a1;
- (void)startWithBlendingLayerServer:(id)a0;
- (void)processShortcutsSessionGivenSummary:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)processShortcutsSessionGivenSummary:(id)a0 completion:(id /* block */)a1;
- (void)setupXPCListener;
- (void)processShortcutsActionSelectionGivenFeedbackEvent:(id)a0;

@end
