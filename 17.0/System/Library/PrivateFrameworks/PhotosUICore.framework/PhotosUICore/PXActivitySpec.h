@class UIImage, NSDictionary;

@interface PXActivitySpec : NSObject

@property (class, readonly, nonatomic) double headerDynamicTopToBottomTitleDistance;
@property (class, readonly, nonatomic) double headerDynamicBottomTitleToBottomSubtitleDistance;
@property (class, readonly, nonatomic) double headerDynamicBottomSubtitleToBottomDistance;
@property (class, readonly, nonatomic) double captionDynamicDistance;
@property (class, readonly, nonatomic) double invitationAvatarToTextBaselineDynamicDistance;
@property (class, readonly, nonatomic) double invitationTextToAlbumTitleBaselineDynamicDistance;
@property (class, readonly, nonatomic) double invitationAlbumTitleBottomDynamicDistance;
@property (class, readonly, nonatomic) double invitationSubscriberInfoToButtonsDynamicDistance;
@property (class, readonly, nonatomic) double invitationButtonToJunkBaselineDynamicDistance;
@property (class, readonly, nonatomic) double invitationJunkBottomDynamicDistance;
@property (class, readonly, nonatomic) double activityCaptionCellTopToTitleBaselineDynamicDistance;
@property (class, readonly, nonatomic) double activityCaptionTitleBaselineToSubtitleBaselineDynamicDistance;
@property (class, readonly, nonatomic) double activityCaptionSubtitleBaselineToCellBottomDynamicDistance;
@property (class, readonly, nonatomic) double activityCaptionSubtitleBaselineToCellBottomDynamicDistance2;
@property (class, readonly, nonatomic) double activityCaptionCellTopToLikeButtonTopDynamicDistance;
@property (class, readonly, nonatomic) UIImage *activityChevronImage;
@property (class, readonly, nonatomic) UIImage *invitationHeaderImage;
@property (class, readonly, nonatomic) NSDictionary *invitationTextAttributes;
@property (class, readonly, nonatomic) NSDictionary *invitationSubtitleTextAttributes;
@property (class, readonly, nonatomic) NSDictionary *invitationInfoTextAttributes;
@property (class, readonly, nonatomic) NSDictionary *invitationAlbumTitleTextAttributes;
@property (class, readonly, nonatomic) NSDictionary *invitationSubscriberInfoTextAttributes;
@property (class, readonly, nonatomic) NSDictionary *invitationReportJunkTextAttributes;
@property (class, readonly, nonatomic) NSDictionary *invitationReportJunkLinkAttributes;
@property (class, readonly, nonatomic) NSDictionary *activityCaptionTextAttributes;
@property (class, readonly, nonatomic) NSDictionary *activityCaptionTextEmphasizedAttributes;
@property (class, readonly, nonatomic) NSDictionary *activityDateSubtitleTextAttributes;
@property (class, readonly, nonatomic) NSDictionary *sharedAlbumActivityGadgetCaptionTextAttributes;

+ (id)_activityAlbumTitleTextAttributes;
+ (id)_activityAlbumTitleWhiteTextAttributes;
+ (id)_activityHeaderTextAttributes;
+ (id)_activityHeaderWhiteTextAttributes;
+ (id)_activityPosterTextAttributes;
+ (id)_activityPosterWhiteTextAttributes;
+ (id)activityAlbumTitleTextAttributesForTextColorStyle:(unsigned long long)a0;
+ (id)activityHeaderTextAttributesForTextColorStyle:(unsigned long long)a0;
+ (id)activityPosterTextAttributesForTextColorStyle:(unsigned long long)a0;
+ (id)invitationParentViewBackgroundColor:(BOOL)a0;

@end
