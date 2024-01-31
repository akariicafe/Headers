@class NTKCSeparatorView;

@interface NTKCFaceDetailRowActionCell : NTKCDetailTableViewCell {
    NTKCSeparatorView *_topSeparator;
}

@property (nonatomic) BOOL showsTopSeparator;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
