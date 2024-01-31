@class NSString, NSArray, SLCollaborationFooterViewModel, NSAttributedString, NSDictionary, UIViewController, NSNumber, UIColor;
@protocol SHSheetSession;

@interface SHSheetViewModel : NSObject <SHSheetContentViewModel, SHSheetViewModelInterface>

@property (nonatomic) BOOL isSharingExpanded;
@property (copy, nonatomic) NSArray *metadataValues;
@property (nonatomic) BOOL isLoadingMetadata;
@property (copy, nonatomic) NSArray *urlRequests;
@property (copy, nonatomic) NSArray *urlSandboxExtensions;
@property (nonatomic) BOOL showOptions;
@property (copy, nonatomic) NSString *customOptionsTitle;
@property (nonatomic) BOOL showCustomHeaderButton;
@property (copy, nonatomic) NSAttributedString *customHeaderButtonTitle;
@property (retain, nonatomic) UIColor *customHeaderButtonColor;
@property (retain, nonatomic) NSNumber *customViewControllerVerticalInsetWrapper;
@property (retain, nonatomic) NSNumber *customViewControllerSectionHeightWrapper;
@property (copy, nonatomic) NSArray *peopleSuggestions;
@property (copy, nonatomic) NSArray *activities;
@property (copy, nonatomic) NSArray *peopleSuggestionProxies;
@property (copy, nonatomic) NSArray *shareProxies;
@property (copy, nonatomic) NSArray *actionProxies;
@property (copy, nonatomic) NSDictionary *activitiesByUUID;
@property (copy, nonatomic) NSArray *applicationActivityTypes;
@property (retain, nonatomic) NSNumber *nearbyCountSlotID;
@property (nonatomic) BOOL reloadData;
@property (nonatomic) BOOL updateProxiesWithAnimation;
@property (copy, nonatomic) NSArray *restrictedActivityTypes;
@property (nonatomic) BOOL supportsCollaboration;
@property (nonatomic) BOOL supportsSendCopy;
@property (nonatomic) BOOL isCollaborative;
@property (retain, nonatomic) NSString *collaborationModeTitle;
@property (retain, nonatomic) SLCollaborationFooterViewModel *collaborationFooterViewModel;
@property (readonly, nonatomic) id<SHSheetSession> session;
@property (retain, nonatomic) UIViewController *customViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;

@end
