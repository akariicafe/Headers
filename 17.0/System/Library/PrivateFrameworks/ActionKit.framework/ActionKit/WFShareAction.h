@class NSString;
@protocol NSObject;

@interface WFShareAction : WFAction <WFAppListProvider, WFStandaloneShortcutAction>

@property (retain, nonatomic) id<NSObject> supportedExtensionsChangedObserver;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedEnumerator;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (id)selectedIdentifier;
- (id)appEnumerator;
- (id)contentDestinationWithError:(id *)a0;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)anyExtensionBundleIdentifierForIdentifier:(id)a0 extensionPointIdentifier:(id)a1 isContentManaged:(BOOL)a2 error:(id *)a3;
- (id)overrideExtensionIdentifier;
- (void)showUIWithArchivedItems:(id)a0 isContentManaged:(BOOL)a1 extensionBundleIdentifier:(id)a2;

@end
