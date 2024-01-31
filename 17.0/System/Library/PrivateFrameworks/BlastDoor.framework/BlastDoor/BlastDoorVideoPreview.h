@class BlastDoorImage, NSString, BlastDoorVideoPreview_VideoFormat, BlastDoorVideoPreview_AudioFormat;

@interface BlastDoorVideoPreview : NSObject {
    void /* unknown type, empty encoding */ videoPreview;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) BOOL isAutoloop;
@property (nonatomic, readonly) long long frame;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long trackCount;
@property (nonatomic, readonly) BlastDoorVideoPreview_VideoFormat *videoFormat;
@property (nonatomic, readonly) BlastDoorVideoPreview_AudioFormat *audioFormat;
@property (nonatomic, readonly) BOOL videoIsMonoskiAsset;

- (id)init;
- (void).cxx_destruct;

@end
