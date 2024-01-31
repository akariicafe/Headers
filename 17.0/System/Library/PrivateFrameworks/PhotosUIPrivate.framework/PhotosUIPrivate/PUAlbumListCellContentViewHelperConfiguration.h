@class NSString, PUPhotoDecoration;

@interface PUAlbumListCellContentViewHelperConfiguration : NSObject

@property (nonatomic) BOOL allowsEmailInSubtitle;
@property (nonatomic) BOOL showsDeleteButtonOnCellContentView;
@property (nonatomic) BOOL hasRoundedCorners;
@property (nonatomic) BOOL shouldUseTableView;
@property (nonatomic) BOOL shouldCenterTextHorizontally;
@property (nonatomic) BOOL hasClearBackgroundColor;
@property (nonatomic) long long cellContentViewLayout;
@property (nonatomic) unsigned long long stackViewStyle;
@property (nonatomic) unsigned long long folderStackViewStyle;
@property (nonatomic) long long imageContentMode;
@property (copy, nonatomic) NSString *albumSubtitleFormat;
@property (copy, nonatomic) NSString *nameOfEmptyPeopleAlbumPlaceholderImage;
@property (copy, nonatomic) NSString *nameOfEmptyAlbumPlaceholderImage;
@property (copy, nonatomic) NSString *nameOfEmptySharedAlbumPlaceholderImage;
@property (retain, nonatomic) PUPhotoDecoration *photoDecoration;
@property (nonatomic) struct CGSize { double width; double height; } stackSize;
@property (nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } stackOffset;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } stackPerspectiveOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } stackPerspectiveInsets;
@property (nonatomic) double gridMargin;
@property (nonatomic) double gridItemSpacing;
@property (nonatomic) double posterSquareCornerRadius;
@property (nonatomic) double posterSubitemCornerRadius;
@property (nonatomic) BOOL cornerOverlaysDisabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } previewInsets;
@property (nonatomic) double dynamicTitleLeading;
@property (nonatomic) double dynamicSubtitleleading;
@property (nonatomic) double dynamicTopLeading;

+ (id)defaultConfiguration;

- (void)configureWithSpec:(id)a0;
- (void).cxx_destruct;

@end
