@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface CKPhotoSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell>

@property (retain, nonatomic) UIImageView *livePhotoImage;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *durationGradientImage;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL isSpatial;
@property (retain, nonatomic) UIView *spatialBadgeView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)_configureDurationLabelForResult:(id)a0;
- (void)_livePhotoUpdated:(id)a0;
- (void)_spatialStatusUpdated:(id)a0;
- (void)_thumbnailGenerated:(id)a0;
- (void)_videoDurationUpdated:(id)a0;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1 mode:(unsigned long long)a2;
- (void)refreshForSearchTextIfNeeded:(id)a0;

@end
