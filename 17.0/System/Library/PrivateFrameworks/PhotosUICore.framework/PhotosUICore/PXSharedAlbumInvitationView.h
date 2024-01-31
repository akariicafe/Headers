@class NSString, UIImageView, PXRoundedCornerOverlayView, UILabel, PXFeedInvitationSectionInfo, UIButton;
@protocol PXSharedAlbumInvitationViewDelegate, PLCloudSharedAlbumProtocol;

@interface PXSharedAlbumInvitationView : UIView <PXSettingsKeyObserver>

@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (nonatomic) unsigned long long avatarImageTag;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *albumTitleLabel;
@property (retain, nonatomic) UILabel *subscriberInfoLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *declineButton;
@property (retain, nonatomic) UILabel *reportJunkLabel;
@property (retain, nonatomic) id<PLCloudSharedAlbumProtocol> sharedAlbum;
@property (weak, nonatomic) id<PXSharedAlbumInvitationViewDelegate> delegate;
@property (retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL useInPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadResources;

- (void)_updateColors;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateUI;
- (void)_updateRoundedCornerOverlayView;
- (void)_acceptButtonTapped:(id)a0;
- (id)_actionButtonWithTitle:(id)a0 action:(SEL)a1 buttonColor:(id)a2 titleColor:(id)a3;
- (void)_declineButtonTapped:(id)a0;
- (void)_enableUserInteractions:(BOOL)a0;
- (void)_handlePersonImage:(id)a0 imageTag:(unsigned long long)a1;
- (id)_parentViewBackgroundColor;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (void)_reportJunk;
- (void)_reportJunkLabelTapped:(id)a0;
- (id)_roundedCornerViewBackgroundColor;
- (void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateAlbumTitleLabel;
- (void)_updateAvatarImage:(unsigned long long)a0;
- (void)_updateInfoLabel;
- (void)_updateReportJunkLabel;
- (void)_updateSubscriberInfoLabel;

@end
