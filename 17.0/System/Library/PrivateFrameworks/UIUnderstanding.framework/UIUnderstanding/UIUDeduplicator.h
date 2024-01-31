@class UIDeduplicatorCompat;

@interface UIUDeduplicator : NSObject

@property (readonly) UIDeduplicatorCompat *underlyingObject;

+ (BOOL)downloadModels:(double)a0;
+ (BOOL)areModelsAvailable;
+ (BOOL)downloadModelSet:(long long)a0 timeout:(double)a1;

- (id)init:(long long)a0;
- (void).cxx_destruct;
- (id)addElementsForScreen:(id)a0 candidates:(id)a1 screenGroupID:(id)a2;
- (id)identifyElements:(id)a0 elements:(id)a1;
- (id)identifyImage:(id)a0 image:(struct CGImage { } *)a1;
- (id)initWithPortraitModels;
- (id)initWithSquareModels;

@end
