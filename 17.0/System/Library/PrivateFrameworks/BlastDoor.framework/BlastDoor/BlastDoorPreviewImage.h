@class NSString, BlastDoorImage;

@interface BlastDoorPreviewImage : NSObject {
    void /* unknown type, empty encoding */ previewImage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) long long frameCount;
@property (nonatomic, readonly) BOOL isScreenshot;
@property (nonatomic, readonly) NSString *stickerEffect;
@property (nonatomic, readonly) unsigned long long stickerEffectType;
@property (nonatomic, readonly) NSString *utTypeString;
@property (nonatomic, readonly) BOOL isMonoskiAsset;

- (id)init;
- (void).cxx_destruct;

@end
