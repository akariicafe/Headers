@class NSString, NSAttributedString, UIColor;
@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXCMMInvitationViewModel : PXObservable

@property (readonly, nonatomic) BOOL isNew;
@property (readonly, copy, nonatomic) NSString *posterTitle;
@property (readonly, copy, nonatomic) NSString *posterSubtitle;
@property (readonly, copy, nonatomic) id<PXDisplayAsset> posterAsset;
@property (readonly, copy, nonatomic) id<PXUIImageProvider> posterMediaProvider;
@property (readonly, copy, nonatomic) NSAttributedString *attributedPosterTitle;
@property (readonly, copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, copy, nonatomic) NSAttributedString *attributedSubtitle1;
@property (readonly, copy, nonatomic) NSAttributedString *attributedSubtitle2;
@property (readonly, nonatomic) UIColor *opaqueAncestorBackgroundColor;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)setHighlighted:(BOOL)a0;
- (void)setAttributedTitle:(id)a0;
- (void).cxx_destruct;
- (void)setIsNew:(BOOL)a0;
- (void)setPosterAsset:(id)a0;
- (void)setPosterTitle:(id)a0;
- (void)setAttributedPosterTitle:(id)a0;
- (void)setAttributedSubtitle1:(id)a0;
- (void)setAttributedSubtitle2:(id)a0;
- (void)setOpaqueAncestorBackgroundColor:(id)a0;
- (void)setPosterMediaProvider:(id)a0;
- (void)setPosterSubtitle:(id)a0;

@end
