@class SUUIEmbeddedMediaView;

@interface SUUIMediaCollectionViewCell : SUUICollectionViewCell {
    SUUIEmbeddedMediaView *_mediaView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) SUUIEmbeddedMediaView *mediaView;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
