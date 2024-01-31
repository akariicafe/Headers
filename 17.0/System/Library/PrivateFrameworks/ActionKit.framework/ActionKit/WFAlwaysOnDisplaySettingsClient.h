@class NSString;

@interface WFAlwaysOnDisplaySettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reversalArbiter;
+ (BOOL)canRunIntent;
+ (void)createClientWithCompletionHandler:(id /* block */)a0;
+ (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)a0;
+ (void)getReversalStateWithBookmark:(id)a0 completionHandler:(id /* block */)a1;
+ (id)alwaysOnPublisher;
+ (id)filteredPublisherForAlwaysOnPublisher:(id)a0;
+ (id)reverseAlwaysOnPublisher;

- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)alwaysOnDisplayState;

@end
