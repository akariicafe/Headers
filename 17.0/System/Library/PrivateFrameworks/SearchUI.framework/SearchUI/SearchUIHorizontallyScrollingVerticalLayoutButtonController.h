@class SearchUIImageView, SearchUILabel;

@interface SearchUIHorizontallyScrollingVerticalLayoutButtonController : SearchUIHorizontallyScrollingContainerButtonController {
    SearchUIImageView *thumbnailView;
}

@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *footnoteLabel;

- (double)spacing;
- (void).cxx_destruct;
- (id)thumbnailView;
- (void)setThumbnailView:(id)a0;
- (id)setupContentView;
- (void)setCardSectionRowModel:(id)a0;

@end
