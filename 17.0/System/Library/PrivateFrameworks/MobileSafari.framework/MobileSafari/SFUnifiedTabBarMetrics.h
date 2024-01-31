@class NSString;

@interface SFUnifiedTabBarMetrics : SFUnifiedBarMetrics {
    NSString *_maximumActiveItemWidthDefaultsKey;
}

@property (nonatomic) unsigned long long sizeClass;
@property (readonly, nonatomic) double insetToRevealNextItem;
@property (readonly, nonatomic) double maximumActiveItemWidth;
@property (readonly, nonatomic) double minimumActiveItemWidth;
@property (readonly, nonatomic) double minimumActiveItemWidthRatio;
@property (readonly, nonatomic) double minimumInactiveItemWidth;

+ (id)_maximumActiveItemWidthDefaultsKeyForSizeClass:(unsigned long long)a0;
+ (double)_maximumActiveItemWidthForSizeClass:(unsigned long long)a0;
+ (double)minimumActiveItemWidthForSizeClass:(unsigned long long)a0;
+ (double)minimumInactiveItemWidthForSizeClass:(unsigned long long)a0;

- (void)dealloc;
- (id)initWithTraitCollection:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_sizeClassDidChange;
- (double)maximumItemSpacing;
- (double)minimumItemSpacing;

@end
