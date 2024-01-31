@class UIImage, WRCannedRepliesStore, PSSpecifier;

@interface WRCannedRepliesViewController : PSListController {
    WRCannedRepliesStore *_repliesStore;
    PSSpecifier *_addNewSpecifier;
    PSSpecifier *_smartRepliesSpecifier;
    UIImage *_accessoryImage;
    UIImage *_highlightedAccessoryImage;
    BOOL _supportedEnhancedEditing;
}

@property (readonly, nonatomic) unsigned long long category;

- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_returnKeyPressed:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)specifiers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)updateEditDoneButton;
- (id)cannedReplies;
- (void)returnPressedAtEnd;
- (void)addNewReply:(id)a0;
- (id)cannedRepliesFromSpecifiers;
- (void)configureCellAccessoryImage:(id)a0;
- (id)customReply:(id)a0;
- (id)includeSmartReplies;
- (void)loadRepliesStoreIfNeeded;
- (id)newCannedReplySpecifier;
- (unsigned long long)numberOfDefaultReplySpecifiers;
- (void)saveReplies;
- (void)setCustomReply:(id)a0 specifier:(id)a1;
- (void)setIncludeSmartReplies:(id)a0 specifier:(id)a1;

@end
