@class NSArray, NSString, CAFlipBook;
@protocol BLSHRenderedFlipbookFrame;

@interface BLSHFlipbook : NSObject <BLSHFlipbook> {
    CAFlipBook *_flipbook;
    BOOL _wantsTransform;
    BOOL _inverted;
}

@property (readonly, nonatomic) id<BLSHRenderedFlipbookFrame> frameOnGlass;
@property (readonly, nonatomic) id<BLSHRenderedFlipbookFrame> captureFrameOnGlass;
@property (readonly, nonatomic) id<BLSHRenderedFlipbookFrame> lastRenderedFrame;
@property (readonly, nonatomic) NSArray *activeFrames;
@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (nonatomic, getter=isPowerSavingEnabled) BOOL powerSavingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithPlatformProvider:(id)a0;

- (void)purge;
- (id)initWithPlatformProvider:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)collect;
- (id)cancelAllFrames;
- (void)renderFrameForPresentation:(id)a0 dateSpecifier:(id)a1 completion:(id /* block */)a2;

@end
