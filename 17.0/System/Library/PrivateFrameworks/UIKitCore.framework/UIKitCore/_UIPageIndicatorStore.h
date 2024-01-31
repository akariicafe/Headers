@class UIImage, NSMutableArray, _UIPageIndicatorStoreObject;
@protocol _UIPageIndicatorStoreDelegate;

@interface _UIPageIndicatorStore : NSObject {
    struct { struct SizeForMaximumContentSizeCache { unsigned char dirty : 1; double fittingLength; struct CGSize { double width; double height; } maximumSize; } fittingSize; struct NumberOfVisibleIndicatorsForStartIndexCache { unsigned char dirty : 1; double fittingLength; long long startIndex; long long numberOfIndicators; } indicatorCount; struct ContentSizeForNumberOfPagesCache { unsigned char dirty : 1; double numberOfPages; struct CGSize { double width; double height; } contentSize; } contentSize; struct MinimumContentSizeForIndicatorsInRangeCache { unsigned char dirty : 1; struct _NSRange { unsigned long long location; unsigned long long length; } range; struct CGSize { double width; double height; } contentSize; } contentSizeInRange; } _cache;
    struct { struct SizeForMaximumContentSizeCache { unsigned char dirty : 1; double fittingLength; struct CGSize { double width; double height; } maximumSize; } fittingSize; struct NumberOfVisibleIndicatorsForStartIndexCache { unsigned char dirty : 1; double fittingLength; long long startIndex; long long numberOfIndicators; } indicatorCount; struct ContentSizeForNumberOfPagesCache { unsigned char dirty : 1; double numberOfPages; struct CGSize { double width; double height; } contentSize; } contentSize; struct MinimumContentSizeForIndicatorsInRangeCache { unsigned char dirty : 1; struct _NSRange { unsigned long long location; unsigned long long length; } range; struct CGSize { double width; double height; } contentSize; } contentSizeInRange; } _expandedCache;
    UIImage *_defaultImage;
    _UIPageIndicatorStoreObject *_defaultObject;
}

@property (retain, nonatomic) NSMutableArray *store;
@property (weak, nonatomic) id<_UIPageIndicatorStoreDelegate> delegate;
@property (retain, nonatomic) UIImage *preferredImage;
@property (retain, nonatomic) UIImage *preferredActiveImage;
@property (nonatomic) double indicatorSpacing;
@property (nonatomic) long long direction;
@property (readonly, nonatomic) UIImage *indicatorImage;
@property (readonly, nonatomic) long long numberOfPages;

- (id)customActiveIndicatorImageForPage:(long long)a0;
- (id)customIndicatorImageForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })contentSizeForNumberOfPages:(long long)a0 hasExpandedActiveIndicator:(BOOL)a1;
- (struct CGSize { double x0; double x1; })minimumContentSizeForIndicatorsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 hasExpandedActiveIndicator:(BOOL)a1;
- (id)init;
- (struct CGSize { double x0; double x1; })resolvedIndicatorLayoutSizeForPage:(long long)a0;
- (id)indicatorImageForPage:(long long)a0;
- (void)validateDataStore;
- (long long)objectIndexForPage:(long long)a0;
- (id)_defaultIndicatorImage;
- (struct CGSize { double x0; double x1; })_sizeForMaximumContentSizeFittingLength:(double)a0 hasExpandedActiveIndicator:(BOOL)a1;
- (void)updateStoreForNumberOfPages:(long long)a0;
- (void)updateImage:(id)a0 forPage:(long long)a1;
- (struct CGSize { double x0; double x1; })_indicatorSizeForObject:(id)a0;
- (void)_insertImage:(id)a0 forPage:(long long)a1 active:(BOOL)a2;
- (void)_resetStore;
- (long long)numberOfVisibleIndicatorsForStartIndex:(long long)a0 fittingLength:(double)a1 hasExpandedActiveIndicator:(BOOL)a2;
- (void)updateActiveImage:(id)a0 forPage:(long long)a1;
- (void)_updateImage:(id)a0 forPage:(long long)a1 active:(BOOL)a2;
- (void)invalidateLayoutCache;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })indicatorSizeForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })defaultIndicatorSize;
- (struct CGSize { double x0; double x1; })sizeForMaximumContentSizeFittingLength:(double)a0 hasExpandedActiveIndicator:(BOOL)a1;
- (long long)_objectIndexForPage:(long long)a0 lower:(long long)a1 upper:(long long)a2;
- (double)indicatorPositionForContinuousPage:(double)a0 expandedIndicatorPage:(long long)a1;
- (struct CGSize { double x0; double x1; })_contentSizeForIndicatorsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 hasExpandedActiveIndicator:(BOOL)a1;
- (void)_removeImageForPage:(long long)a0 active:(BOOL)a1;
- (id)activeIndicatorImageForPage:(long long)a0;

@end
