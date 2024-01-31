@class NSArray, NSMutableDictionary, UIView, UILabel;

@interface SFAvatarStackView : UIView {
    NSMutableDictionary *_avatarViewControllersByParticipantIdentifier;
    NSMutableDictionary *_contactsByParticipantIdentifer;
    UIView *_overflowView;
    UILabel *_overflowLabel;
    NSArray *_visibleParticipantIdentifiers;
}

@property (nonatomic) long long alignment;
@property (nonatomic) double avatarDiameter;
@property (copy, nonatomic) NSArray *shareParticipants;
@property (nonatomic) double spacing;

+ (id)randomContactIdentifiers;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_avatarViewControllerForParticipantIdentifier:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectForContentWidth:(double)a0 viewWith:(double)a1;
- (void)_layOutIndexes:(id)a0 ofParticipantIdentifiers:(id)a1 targetWidth:(id)a2;
- (void)_loadOverflowView;
- (id)_overflowLabel;
- (id)_overflowView;
- (void)_removeViewsForIndexes:(id)a0 ofParticipantIdentifiers:(id)a1;
- (void)_setIndexes:(id)a0 ofParticipantIdentifiers:(id)a1 transitioning:(BOOL)a2 completion:(id /* block */)a3;
- (void)_setVisibleParticipantIdentifiers:(id)a0;
- (void)_updateVisibleParticipants;
- (id)_viewForParticipantIdentifier:(id)a0;
- (double)_widthForParticipantCount:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForParticipantCount:(long long)a0;

@end
