@class NSArray, NSDictionary, NSString, INCExtensionConnection, INExtensionContext, NSObject;
@protocol OS_dispatch_queue, INSExtensionServiceDelegate;

@interface INSExtensionService : NSObject <INSAnalyticsObserver, INSAnalyticsDataSource, INSAppLaunchCommandDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_requestDelegateQueue;
    INCExtensionConnection *_currentConnection;
    NSString *_currentBundleIdForDisplay;
}

@property (readonly, copy, nonatomic) NSDictionary *options;
@property (weak, nonatomic) id<INSExtensionServiceDelegate> delegate;
@property (readonly, nonatomic) INExtensionContext *extensionContext;
@property (copy, nonatomic) NSArray *airPlayRouteIdentifiers;
@property (readonly, copy, nonatomic) NSArray *commandIdentifiers;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_siriLanguageCode;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)_extensionInputItems;
- (id)_connectionForIntent:(id)a0;
- (BOOL)_errorImpliesCloudRelay:(id)a0;
- (void)_extensionRequestDidFinishForIntent:(id)a0 error:(id)a1;
- (void)_extensionRequestWillStartForIntent:(id)a0;
- (BOOL)_isVoiceShortcutsRemoteExecutionUnavailable:(id)a0;
- (void)_logEventWithType:(long long)a0 context:(id)a1 contextNoCopy:(BOOL)a2;
- (void)_logPrewarmDidEndWithCommand:(id)a0 applicationIdentifier:(id)a1 wasPrewarmed:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)_prewarmExtensionWithIntent:(id)a0 applicationIdentifier:(id)a1 command:(id)a2 completionHandler:(id /* block */)a3;
- (void)_requiresHandlingCommand:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldPrepareAudioSessionForCommand:(id)a0 intent:(id)a1;
- (id)_updatedEventContextWithExtensionLoadType:(id)a0 wasPrewarmed:(BOOL)a1;
- (id)analytics:(id)a0 contextDictionaryForCommand:(id)a1;
- (id)analytics:(id)a0 contextDictionaryForError:(id)a1;
- (void)analytics:(id)a0 needsToLogEventWithType:(long long)a1 context:(id)a2 contextNoCopy:(BOOL)a3;
- (id /* block */)completionHandlerForAppLaunchCommand:(id)a0 withCompletion:(id /* block */)a1;
- (void)handleCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleCommand:(id)a0 fromRemoteDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)resetExternalResources;

@end
