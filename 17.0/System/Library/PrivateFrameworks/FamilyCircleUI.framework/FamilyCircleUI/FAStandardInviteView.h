@class NSString, UIImageView, FAFamilySharingFeaturesView, UILabel;

@interface FAStandardInviteView : UIView <FAInviteViewProtocol> {
    UILabel *_titleLabel;
    UIImageView *_familySharingLogo;
    UILabel *_inviteHeaderLabel;
    FAFamilySharingFeaturesView *_featuresView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)desiredHeightForWidth:(double)a0;
- (double)_heightForText:(id)a0 width:(double)a1;
- (double)_heightForTitle:(id)a0 width:(double)a1;
- (id)_labelWithCenteredText:(id)a0;
- (id)initWithInvite:(id)a0 hideLocationSharing:(BOOL)a1;

@end
