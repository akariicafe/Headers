@class UIImage, UIColor, NSString;

@interface _UIBatteryViewAXHUDImageCacheInfo : NSObject

@property (retain, nonatomic) UIImage *cachedImage;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double capacity;
@property (nonatomic) BOOL showBolt;
@property (nonatomic) BOOL reverseLayoutDirection;
@property (nonatomic) double scale;
@property (nonatomic) BOOL showsPercentage;
@property (retain, nonatomic) NSString *contentSizeCategory;

- (void).cxx_destruct;
- (BOOL)cacheMatchesCapacity:(double)a0 fillColor:(id)a1 tintColor:(id)a2 showingBolt:(BOOL)a3 reverseLayout:(BOOL)a4 scale:(double)a5 showsPercentage:(BOOL)a6 contentSizeCategory:(id)a7;

@end
