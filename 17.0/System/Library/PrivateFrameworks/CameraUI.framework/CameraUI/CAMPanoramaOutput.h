@class CAMCaptureEngine;

@interface CAMPanoramaOutput : AVCaptureVideoDataOutput

@property (readonly, weak, nonatomic) CAMCaptureEngine *_engine;
@property (readonly, nonatomic) long long photoEncodingBehavior;

- (void).cxx_destruct;
- (id)initWithEngine:(id)a0;
- (void)changeToEncodingBehavior:(long long)a0;
- (void)changeToDirection:(long long)a0;

@end
