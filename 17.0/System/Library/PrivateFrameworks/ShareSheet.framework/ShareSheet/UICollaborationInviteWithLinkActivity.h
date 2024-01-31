@class NSString;
@protocol SFCollaborationService, SFCollaborationItem;

@interface UICollaborationInviteWithLinkActivity : UIActivity <UICollaborationActivity>

@property (retain, nonatomic) id<SFCollaborationItem> collaborationItem;
@property (nonatomic) BOOL isCollaborative;
@property (weak, nonatomic) id<SFCollaborationService> collaborationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)_activitySettingsImage;
- (BOOL)_allowsAutoCancelOnDismiss;
- (long long)_defaultSortGroup;
- (BOOL)canPerformWithCollaborationItem:(id)a0 activityItems:(id)a1;

@end
