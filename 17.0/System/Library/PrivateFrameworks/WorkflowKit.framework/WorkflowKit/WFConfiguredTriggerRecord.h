@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord

@property (copy, nonatomic) NSData *triggerData;
@property (copy, nonatomic) NSData *selectedEntryMetadata;
@property (nonatomic) BOOL shouldPrompt;
@property (nonatomic) BOOL shouldNotify;
@property (nonatomic) BOOL editableShortcut;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) int source;
@property (nonatomic) int notificationLevel;

- (void).cxx_destruct;

@end
