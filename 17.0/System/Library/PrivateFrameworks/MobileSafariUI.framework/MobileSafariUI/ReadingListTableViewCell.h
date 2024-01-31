@class VibrantLabelView, NSString, _SFSiteIconView, UILabel;

@interface ReadingListTableViewCell : VibrantTableViewCell {
    VibrantLabelView *_detailTextLabel;
    UILabel *_siteNameLabel;
    UILabel *_textLabel;
    BOOL _wantsSelectedAppearance;
    long long _dragState;
    _SFSiteIconView *_imageView;
}

@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *fetchingStatusText;
@property (readonly, nonatomic) int bookmarkID;
@property (copy, nonatomic) NSString *siteName;
@property (copy, nonatomic) NSString *previewText;

+ (double)minimumCellHeight;

- (void)dealloc;
- (id)_titleLabelFont;
- (void)setBookmark:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_setOpaque:(BOOL)a0 forSubview:(id)a1;
- (void)dragStateDidChange:(long long)a0;
- (void)_createImageViewIfNeeded;
- (id)_detailLabelFont;
- (void)_initializeAutoLayoutConstraints;
- (id)_scaledFontForTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1;
- (void)_setFetchingStatusTextForBookmark:(id)a0;
- (id)_siteNameFont;
- (void)_updateNumberOfLines;
- (void)_updateSelectedAnimated:(BOOL)a0;
- (void)_updateVibrantEffect;
- (void)displayThumbnailIconForBookmark:(id)a0 synchronously:(BOOL)a1;
- (void)setBookmark:(id)a0 isArchiving:(BOOL)a1;
- (void)setReadingListIcon:(id)a0;
- (void)setUsesVibrantEffect:(BOOL)a0;

@end
