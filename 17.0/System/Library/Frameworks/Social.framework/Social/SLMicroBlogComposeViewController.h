@class NSString, NSArray, SLMicroBlogUserRecord, SLComposeSheetConfigurationItem, SLMicroBlogAccountsTableViewController, SLSheetPlaceViewController, NSObject, SLMicroBlogMentionsViewController, SLPlace;
@protocol SLMicroBlogSheetDelegate;

@interface SLMicroBlogComposeViewController : SLComposeServiceViewController <UITextViewDelegate, SLMicroBlogMentionsDelegate, SLMicroBlogAccountsTableViewControllerDelegate, SLSheetPlaceViewControllerDelegate> {
    NSObject<SLMicroBlogSheetDelegate> *_microBlogSheetDelegate;
    NSString *_serviceAccountTypeIdentifier;
    SLMicroBlogMentionsViewController *_mentionsViewController;
    unsigned long long _mentionStartLocation;
    BOOL _mentionPendingStart;
    BOOL _rotatedDuringAccountsPopover;
    BOOL _usingLocationOverride;
    NSArray *_accountUserRecords;
    NSArray *_accountIdentifiers;
    SLMicroBlogUserRecord *_selectedAccountUserRecord;
    SLComposeSheetConfigurationItem *_accountConfigurationItem;
    SLComposeSheetConfigurationItem *_locationConfigurationItem;
    SLMicroBlogAccountsTableViewController *_accountViewController;
    SLSheetPlaceViewController *_placeViewController;
    SLPlace *_currentPlace;
    long long _shortenedURLCost;
    long long _maxURLLength;
    BOOL _isPresentingPlaces;
}

@property (weak) NSObject<SLMicroBlogSheetDelegate> *microBlogSheetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceBundle;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)appWillEnterForeground:(id)a0;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)isContentValid;
- (void)_presentAccountPickerController;
- (id)_accountConfigurationItem;
- (void)_beginLoadingAccountProfileImages;
- (long long)_characterCountForText:(id)a0;
- (int)_charactersRemainingWithText:(id)a0;
- (BOOL)_countMediaAttachmentsTowardCharacterCount;
- (void)_dismissMentionsViewController;
- (id)_locationConfigurationItem;
- (id)_mentionsSearchString;
- (void)_performLocationAction;
- (id)_placeViewController;
- (void)_presentMentionsViewControllerIfApplicableForSearchString:(id)a0;
- (void)_presentMentionsViewControllerWithSearchString:(id)a0;
- (void)_presentNoAccountsAlertIfNecessaryAndReady;
- (void)_presentPlaceViewController;
- (void)accountsViewController:(id)a0 didSelectAccountUserRecord:(id)a1;
- (void)applyMention:(id)a0;
- (int)characterCountForEnteredText:(id)a0 attachments:(id)a1;
- (id)completeText:(id)a0 withAttachments:(id)a1;
- (id)configurationItems;
- (void)didSelectPost;
- (void)mentionsViewController:(id)a0 finishedWithResult:(id)a1;
- (void)noteLocationInfoChanged:(id)a0;
- (void)placeViewController:(id)a0 didSelectPlace:(id)a1;
- (void)placeViewController:(id)a0 willDisappear:(BOOL)a1;
- (void)presentNoAccountsAlert;
- (void)presentationAnimationDidFinish;
- (void)setGeotagStatus:(int)a0;
- (void)updateGeotagStatus;
- (void)updateShortenedURLCost;

@end
