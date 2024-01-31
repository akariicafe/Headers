@interface PhotosUICore.PXScrollBehavior : NSObject {
    void /* unknown type, empty encoding */ behavior;
}

@property (nonatomic, readonly) long long axis;
@property (nonatomic, readonly) long long decelerationRate;
@property (nonatomic, readonly) BOOL pagingEnabled;
@property (nonatomic, readonly) double pagingOrigin;
@property (nonatomic, readonly) double pageOffset;
@property (nonatomic, readonly) double intrinsicContentOffset;
@property (nonatomic, readonly) BOOL allowFlickAcrossMultiplePages;

+ (id)normalWithAxis:(long long)a0;
+ (id)normalWithAxis:(long long)a0 intrinsicContentOffset:(double)a1;
+ (id)pagingWithAxis:(long long)a0 pagingOrigin:(double)a1 pageOffset:(double)a2 decelerationRate:(long long)a3;

- (id)init;
- (struct CGPoint { double x0; double x1; })adjustedScrollTargetContentOffsetFor:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 currentContentOffset:(struct CGPoint { double x0; double x1; })a2;

@end
