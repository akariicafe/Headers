@class NSString, UICollectionView;
@protocol PRInlineComplicationGalleryViewDelegate;

@interface PRInlineComplicationGalleryView : UIView <UICollectionViewDelegate>

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<PRInlineComplicationGalleryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_makeLayout;

@end
