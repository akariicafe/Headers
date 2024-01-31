@class NSString, SHSheetGroupActivitySharingController;

@interface UISharePlayActivity : UIActivity <SHSheetGroupActivitySharingControllerDelegate, UIPeopleSuggestionRecipientActivity>

@property (retain, nonatomic) SHSheetGroupActivitySharingController *groupActivitySharingController;
@property (copy, nonatomic) NSString *sessionID;

+ (long long)activityCategory;
+ (BOOL)_canPerform;
+ (unsigned long long)_xpcAttributes;

- (void)_cleanup;
- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)activityImage;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (long long)_defaultSortGroup;
- (void)groupActivitySharingController:(id)a0 didFinish:(BOOL)a1;

@end
