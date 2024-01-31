@class NSArray, NSMutableArray, NSMapTable;
@protocol _UILumaTrackingGroupDelegate;

@interface _UILumaTrackingGroup : NSObject <_UILumaTrackingBackdropViewGroupDelegate> {
    id<_UILumaTrackingGroupDelegate> _delegate;
    NSArray *_lumaViews;
    NSMutableArray *_lumaValues;
    NSMapTable *_outliers;
    struct { unsigned char scheduledUpdate : 1; } _lumaTrackingGroupFlags;
}

@property (nonatomic) struct { double minimum; double maximum; } transitionBoundaries;
@property (nonatomic) double minimumDifference;
@property (readonly, nonatomic) unsigned long long backgroundLuminanceLevel;
@property (nonatomic, getter=isPaused) BOOL paused;

- (void).cxx_destruct;
- (void)_updateLumaValue;
- (void)backgroundLumaView:(id)a0 didChangeLuma:(double)a1;
- (id)initWithTransitionBoundaries:(struct { double x0; double x1; })a0 minimumDifference:(double)a1 delegate:(id)a2 views:(id)a3;
- (void)unpauseAfterSeedingWithLumaLevel:(unsigned long long)a0;

@end
