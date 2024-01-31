@class NSArray, NSString, NSMutableArray, MTVisualStylingProvider;

@interface NCDigestMosaicFeaturedNotificationsContainerView : UIView <NCDigestFeaturedNotificationsContainerDisplaying> {
    NSArray *_featuredNotificationContentProviders;
    NSMutableArray *_notificationViews;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
}

@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (BOOL)adjustForContentSizeCategoryChange;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)updateContent;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configureNotificationContentView:(id)a0 withContentProvider:(id)a1 showImageAttachment:(BOOL)a2 contentViewStyle:(unsigned long long)a3;
- (unsigned long long)_contentViewStyleForIndex:(unsigned long long)a0;
- (BOOL)_isDisplayingRichFeaturedNotifications;
- (void)_layoutLargeFeaturedView:(id)a0;
- (void)_layoutMediumFeaturedView:(id)a0;
- (void)_layoutSmallFeaturedView:(id)a0;
- (id)_newFeaturedNotificationViewForContentProvider:(id)a0 contentViewStyle:(unsigned long long)a1 showImageAttachment:(BOOL)a2;
- (id)_newNotificationSeamlessContentViewForContentProvider:(id)a0;
- (double)_overlapMarginForLargeFeaturedView;
- (BOOL)_shouldShowImageAttachments;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sizingBoundsForLargeFeaturedViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sizingBoundsForMediumFeaturedViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sizingBoundsForSmallFeaturedViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
