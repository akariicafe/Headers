@class UITextView, STConversationContext, UIView, NSString, CKConversation, NSMutableArray, STLockoutViewController;

@interface CKBlackholeTranscriptViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) UITextView *headerTextView;
@property (nonatomic) BOOL isShowingLockoutView;
@property (retain, nonatomic) STLockoutViewController *lockoutViewController;
@property (retain, nonatomic) STConversationContext *conversationContext;
@property (retain, nonatomic) UIView *lockoutView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)removeLockoutControllerIfNeeded;
- (void)chatAllowedByScreenTimeChanged:(id)a0;
- (id)_alertTitleForDelete;
- (void)_confirmDeleteConversation:(id)a0 view:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_conversationList;
- (void)_deleteConversation:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_handleIDsForCurrentConversation;
- (void)_openRestoredChatInMessages;
- (void)_restoreConversation;
- (void)_updateTranscriptHistory;
- (id)generateHeader;
- (id)initWithConversation:(id)a0;
- (BOOL)isChatAllowedByScreenTime:(id)a0;
- (void)layoutLockoutView;
- (BOOL)shouldPresentBlockingDowntimeViewController;
- (void)showScreenTimeShieldIfNeeded;
- (void)updateScreenTimeShieldIfNeededForChat:(id)a0;

@end
