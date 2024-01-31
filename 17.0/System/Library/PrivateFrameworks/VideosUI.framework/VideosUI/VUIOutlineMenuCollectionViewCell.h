@class NSString;

@interface VUIOutlineMenuCollectionViewCell : _UICollectionViewOutlineCell

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imageName;
@property (nonatomic) BOOL shouldAppearAsHeader;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;

@end
