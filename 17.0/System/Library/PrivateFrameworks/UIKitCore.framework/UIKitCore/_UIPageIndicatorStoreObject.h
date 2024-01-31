@class UIImage;

@interface _UIPageIndicatorStoreObject : NSObject

@property (retain, nonatomic) UIImage *customImage;
@property (nonatomic) struct CGSize { double width; double height; } indicatorSize;
@property (retain, nonatomic) UIImage *activeImage;
@property (nonatomic) struct CGSize { double width; double height; } activeIndicatorSize;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long endIndex;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } resolvedSize;

- (void)_copyImagesFromObject:(id)a0;
- (BOOL)validPageWithinBound:(long long)a0;
- (id)initWithStartIndex:(long long)a0 endIndex:(long long)a1;
- (void)invalidateLayoutInfo;
- (id)splitAtIndex:(long long)a0 withImage:(id)a1 active:(BOOL)a2;
- (id)description;
- (void).cxx_destruct;

@end
