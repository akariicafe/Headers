@class TSTWidthHeightCache;

@interface TSTArchivedLayoutEngineBundle : NSObject

@property (retain, nonatomic) TSTWidthHeightCache *widthHeightCache;

+ (id)widthHeightCacheFromBundle:(id)a0 withNumberOfRows:(unsigned int)a1 andNumberOfColumns:(unsigned int)a2;

- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithLayoutEngine:(id)a0;

@end
