@class NSString, UILabel;

@interface PUCurationTripKeyAssetDebugPhotosGridCell : PUPhotosGridCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
