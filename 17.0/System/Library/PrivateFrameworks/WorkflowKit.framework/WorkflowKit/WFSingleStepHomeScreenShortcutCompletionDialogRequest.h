@class NSString;

@interface WFSingleStepHomeScreenShortcutCompletionDialogRequest : WFDialogRequest <NSSecureCoding> {
    BOOL _requiresRunningShortcut;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *applicationBundleIdentifier;

- (void).cxx_destruct;
- (BOOL)requiresRunningShortcut;
- (void)setRequiresRunningShortcut:(BOOL)a0;
- (id)initWithShortcutName:(id)a0 applicationBundleIdentifier:(id)a1;

@end
