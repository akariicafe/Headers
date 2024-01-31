@class NSMutableArray, CADisplayLink, UIImage, NSDate, NSObject, TVPExternalImageLoader;
@protocol TVPMediaItem;

@interface TVPExternalImagePlayer : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double previousTimestamp;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } referenceTime;
@property (retain, nonatomic) NSDate *referenceDate;
@property (retain, nonatomic) NSDate *playbackDate;
@property (retain, nonatomic) UIImage *currentImage;
@property (retain, nonatomic) TVPExternalImageLoader *imageLoader;
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) NSMutableArray *imageInfosBeingLoaded;
@property (nonatomic) double currentImageTime;
@property (nonatomic) double imageInterval;
@property (nonatomic) double rate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } elapsedTime;
@property (copy, nonatomic) id /* block */ elapsedTimeUpdateBlock;
@property (copy, nonatomic) id /* block */ imageUpdateBlock;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_cancelAllImageLoads;
- (void)_cancelStaleImageLoadsForTime:(double)a0;
- (void)_displayLinkTimerFired:(id)a0;
- (void)_loadImagesIfNecessary;
- (double)_timeAfterRemovingInterstitials:(double)a0;
- (void)_updateImageIntervalWithRate:(double)a0;
- (id)initWithMediaItem:(id)a0 referenceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forDate:(id)a2;

@end
