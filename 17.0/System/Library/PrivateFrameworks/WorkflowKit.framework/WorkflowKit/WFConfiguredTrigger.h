@class NSString, NSData, WFTrigger;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSString *workflowID;
@property (readonly, nonatomic) NSData *selectedEntryMetadata;
@property (readonly, nonatomic) WFTrigger *trigger;
@property (readonly, nonatomic) BOOL shouldPrompt;
@property (readonly, nonatomic) BOOL shouldNotify;
@property (readonly, nonatomic) BOOL editableShortcut;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) int source;
@property (readonly, nonatomic) int notificationLevel;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(BOOL)a3 shouldNotify:(BOOL)a4 enabled:(BOOL)a5 editableShortcut:(BOOL)a6 selectedEntryMetadata:(id)a7;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(BOOL)a3 shouldNotify:(BOOL)a4 enabled:(BOOL)a5 triggerSource:(int)a6 notificationLevel:(int)a7 editableShortcut:(BOOL)a8 selectedEntryMetadata:(id)a9;

@end
