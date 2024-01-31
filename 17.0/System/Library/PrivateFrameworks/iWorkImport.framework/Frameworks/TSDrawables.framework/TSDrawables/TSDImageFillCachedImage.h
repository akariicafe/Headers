@class NSString, TSUImage;

@interface TSDImageFillCachedImage : NSObject <TSUiOSMemoryWarningFlushable> {
    id /* block */ mHandler;
    TSUImage *mCachedImage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mLock;
}

@property (readonly, nonatomic) TSUImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachedImageWithHandler:(id /* block */)a0;

- (void)flush;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
