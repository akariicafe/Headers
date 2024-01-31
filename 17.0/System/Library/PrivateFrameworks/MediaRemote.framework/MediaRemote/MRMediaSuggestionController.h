@class MRMediaSuggestionRequest, NSString, _CDClientContext, _CDContextualChangeRegistration, NSMutableDictionary, NSDictionary, MRMediaSuggestionPreferences, NSObject;
@protocol OS_dispatch_queue, MRMediaSuggestionControllerDelegate;

@interface MRMediaSuggestionController : NSObject <LSApplicationWorkspaceObserverProtocol> {
    BOOL _registeredForChanges;
    MRMediaSuggestionPreferences *_preferences;
    NSMutableDictionary *_internalSuggestions;
    _CDClientContext *_clientContext;
    _CDContextualChangeRegistration *_changeRegistration;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (weak, nonatomic) id<MRMediaSuggestionControllerDelegate> delegate;
@property (readonly, copy, nonatomic) MRMediaSuggestionRequest *request;
@property (readonly, nonatomic) NSDictionary *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;

@end
