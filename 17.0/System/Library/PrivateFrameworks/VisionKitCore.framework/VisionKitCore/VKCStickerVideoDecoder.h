@class NSArray, NSDictionary, NSTimer, NSData, NSMutableArray;
@protocol VKCStickerVideoDecoderDelegate;

@interface VKCStickerVideoDecoder : NSObject

@property (nonatomic) struct CGImageSource { } *videoCGImageSource;
@property (retain, nonatomic) NSDictionary *videoSourceProperties;
@property (retain, nonatomic) NSArray *frameDelays;
@property (nonatomic) long long frameCount;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSMutableArray *frames;
@property (weak, nonatomic) id<VKCStickerVideoDecoderDelegate> delegate;
@property (retain, nonatomic) NSData *videoData;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long currentFrameIndex;

- (void).cxx_destruct;
- (struct CGImage { } *)frameAtIndex:(long long)a0;
- (void)beginPlayback;
- (void)configureForVideoDataChange;
- (void)displayNextFrame;

@end
