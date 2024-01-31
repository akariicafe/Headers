@class NSString, NSItemProvider;
@protocol UICloudSharingControllerDelegate;

@interface _SWCollaborationButtonViewImpl : UIView <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ sBehaviors;
    void /* unknown type, empty encoding */ sharedWithYouCenter;
    void /* unknown type, empty encoding */ headerTitle;
    void /* unknown type, empty encoding */ headerSubtitle;
    void /* unknown type, empty encoding */ _isContentShared;
    void /* unknown type, empty encoding */ highlightSubscriptionCancellable;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ attributionView;
    void /* unknown type, empty encoding */ centerXAnchorHiddenLabel;
    void /* unknown type, empty encoding */ attributionViewXAnchorVisibleLabel;
    void /* unknown type, empty encoding */ labelXAnchorHidden;
    void /* unknown type, empty encoding */ containerLeadingConstraint;
    void /* unknown type, empty encoding */ containerTrailingConstraint;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ detailViewController;
    void /* unknown type, empty encoding */ isRTL;
    void /* unknown type, empty encoding */ numberFormatter;
}

@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic) BOOL isContentShared;
@property (nonatomic, weak) id<UICloudSharingControllerDelegate> cloudSharingControllerDelegate;
@property (nonatomic) void /* unknown type, empty encoding */ activeParticipantCount;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, copy) NSString *headerSubtitle;
@property (nonatomic, retain) void /* unknown type, empty encoding */ headerImage;
@property (nonatomic, weak) void /* unknown type, empty encoding */ outerButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)prepareForPopoverPresentation:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)initWithItemProvider:(id)a0;
- (void)setDetailViewListContent:(id)a0;
- (void)setManageButtonTitle:(id)a0;
- (void)setShowManageButton:(BOOL)a0;
- (void)tintColorDidChange;
- (void)buttonTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)dismissPopoverAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updatePlaceHolderSymbolScale:(long long)a0 weight:(long long)a1 pointSize:(double)a2;

@end
