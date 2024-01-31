@class NSString;

@interface WFRunShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *shortcutSource;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *automationType;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (copy, nonatomic) NSString *automationSuggestionsTrialIdentifier;
@property (nonatomic) unsigned int actionCount;
@property (nonatomic) unsigned int numberOfDialogsPresented;
@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL didRunRemotely;
@property (nonatomic) BOOL isFromAutomationSuggestion;
@property (copy, nonatomic) NSString *scriptingRunBundleIdentifier;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;

@end
