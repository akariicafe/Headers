@class NSString, NSArray, SLCollaborationFooterViewModel, NSAttributedString, RBSProcessIdentity, NSDictionary, NSNumber, UIColor;

@interface SHSheetUIServiceClientContext : NSObject <BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSArray *serializedMetadataValues;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) BOOL configureForCloudSharing;
@property (readonly, nonatomic) BOOL configureForPhotosEdit;
@property (readonly, nonatomic) BOOL hideHeaderView;
@property (readonly, nonatomic) BOOL isSharingExpanded;
@property (readonly, nonatomic) BOOL showHeroActionsHorizontally;
@property (readonly, copy, nonatomic) NSString *topContentSectionText;
@property (readonly, copy, nonatomic) NSArray *heroActionActivityTypes;
@property (readonly, copy, nonatomic) NSArray *excludedActivityTypes;
@property (readonly, copy, nonatomic) NSArray *applicationActivityTypes;
@property (readonly, copy, nonatomic) NSArray *activityConfigurations;
@property (readonly, copy, nonatomic) NSDictionary *activitiesByUUID;
@property (readonly, copy, nonatomic) NSArray *metadataValues;
@property (readonly, nonatomic) BOOL isLoadingMetadata;
@property (readonly, copy, nonatomic) NSArray *urlRequests;
@property (readonly, copy, nonatomic) NSArray *urlSandboxExtensions;
@property (readonly, nonatomic) BOOL showOptions;
@property (readonly, copy, nonatomic) NSString *customOptionsTitle;
@property (readonly, nonatomic) BOOL showCustomHeaderButton;
@property (readonly, copy, nonatomic) NSAttributedString *customHeaderButtonTitle;
@property (readonly, nonatomic) UIColor *customHeaderButtonColor;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) BOOL supportsCollaboration;
@property (readonly, nonatomic) BOOL supportsSendCopy;
@property (readonly, nonatomic) BOOL isCollaborative;
@property (readonly, nonatomic) NSString *collaborationModeTitle;
@property (readonly, nonatomic) SLCollaborationFooterViewModel *collaborationFooterViewModel;
@property (readonly, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, nonatomic) BOOL wantsCustomScene;
@property (readonly, nonatomic) NSNumber *customViewControllerVerticalInsetWrapper;
@property (readonly, nonatomic) NSNumber *customViewControllerSectionHeightWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)_deserializeMetadatas:(id)a0;

- (id)initWithSession:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
