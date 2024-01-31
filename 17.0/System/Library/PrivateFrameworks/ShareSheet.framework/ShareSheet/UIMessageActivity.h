@class NSString, LPLinkMetadata, MFMessageComposeViewController;
@protocol SFCollaborationItem, SFCollaborationService, SFPeopleSuggestion;

@interface UIMessageActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIPeopleSuggestionRecipientActivity, UICollaborationActivity>

@property (retain, nonatomic) MFMessageComposeViewController *messageComposeViewController;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) id<SFPeopleSuggestion> peopleSuggestion;
@property (nonatomic) BOOL ppt_forceImageTypeSupport;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;
@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) id<SFCollaborationItem> collaborationItem;
@property (nonatomic) BOOL isCollaborative;
@property (weak, nonatomic) id<SFCollaborationService> collaborationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applicationBundleID;
+ (long long)activityCategory;
+ (void)_preheatAsyncIfNeeded;
+ (unsigned long long)_xpcAttributes;

- (void)_cleanup;
- (id)activityType;
- (void)dealloc;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)prepareWithActivityItems:(id)a0;
- (id /* block */)_backgroundPreheatBlock;
- (id)_bundleIdentifierForActivityImageCreation;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;

@end
