@interface GKImageCache : NSCache

- (void)applicationDidEnterBackground:(id)a0;
- (id)initWithName:(id)a0 maxCount:(unsigned long long)a1;
- (void)greatestScreenScaleDidChange:(double)a0;

@end
