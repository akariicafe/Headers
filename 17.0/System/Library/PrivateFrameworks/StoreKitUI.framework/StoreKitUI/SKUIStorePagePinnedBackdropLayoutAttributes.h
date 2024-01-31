@class UIColor, NSString;

@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>

@property (retain, nonatomic) UIColor *backdropColor;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long backdropStyle;
@property (nonatomic) BOOL hidesBackdropView;
@property (nonatomic) double transitionProgress;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
