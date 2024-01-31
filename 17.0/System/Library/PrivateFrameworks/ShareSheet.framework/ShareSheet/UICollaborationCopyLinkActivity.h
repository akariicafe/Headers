@class NSString;
@protocol SFCollaborationService, SFCollaborationItem;

@interface UICollaborationCopyLinkActivity : UIActivity <UICollaborationActivity>

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
- (id)activityViewController;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (BOOL)_activitySupportsPromiseURLs;
- (long long)_defaultSortGroup;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)canPerformWithCollaborationItem:(id)a0 activityItems:(id)a1;

@end
