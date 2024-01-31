@class VideosExtrasGridElementViewController, NSArray, VideosExtrasStackTemplateViewController, VideosExtrasGridSectionHeaderStyle;

@interface VideosExtrasStackCollectionCell : UICollectionViewCell {
    NSArray *_fitConstraints;
    BOOL _needsViewWillAppear;
}

@property (retain, nonatomic) VideosExtrasStackTemplateViewController *parentViewController;
@property (retain, nonatomic) VideosExtrasGridElementViewController *viewController;
@property (readonly, nonatomic) VideosExtrasGridSectionHeaderStyle *sectionStyle;

- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;

@end
