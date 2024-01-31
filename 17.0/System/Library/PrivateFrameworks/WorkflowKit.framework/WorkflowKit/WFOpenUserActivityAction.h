@class NSString, NSUserActivity, NSData, INUserActivityDescriptor;

@interface WFOpenUserActivityAction : WFAction <WFStandaloneShortcutAction>

@property (retain, nonatomic) INUserActivityDescriptor *descriptor;
@property (readonly, copy, nonatomic) NSData *activityData;
@property (readonly, copy, nonatomic) NSData *activityImageData;
@property (readonly, copy, nonatomic) NSString *activitySubtitle;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (copy, nonatomic) NSString *launchOrigin;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createActionWithIntent:(id)a0 completionHandler:(id /* block */)a1;
+ (void)createActionWithUserActivity:(id)a0 appBundleIdentifier:(id)a1 launchOrigin:(id)a2 completionHandler:(id /* block */)a3;
+ (id)userActivityActionWithShortcut:(id)a0 launchOrigin:(id)a1 error:(id *)a2;

- (id)localizedSubtitle;
- (id)localizedName;
- (void).cxx_destruct;
- (id)name;
- (id)appDescriptor;
- (id)serializedParameters;
- (id)metricsIdentifier;
- (void)generateShortcutRepresentation:(id /* block */)a0;
- (BOOL)appResourceRequiresAppInstall;
- (id)contentDestinationWithError:(id *)a0;
- (id)disabledPlatformsForUserActivityWithType:(id)a0;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)updateAppDescriptorInDatabaseWithSelectedApp:(id)a0;
- (void)updateAppDescriptorWithSelectedApp:(id)a0;

@end
