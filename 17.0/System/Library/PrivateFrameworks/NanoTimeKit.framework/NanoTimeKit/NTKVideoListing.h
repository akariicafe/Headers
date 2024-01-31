@class UIColor, CLKVideo, NSString, CLKDevice;

@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing> {
    CLKDevice *_device;
    CLKVideo *_video;
    NSString *_name;
    NSString *_videoName;
    NSString *_transitionImageName;
    unsigned long long _tags;
}

@property (readonly, nonatomic) UIColor *overlayColor;
@property (readonly, nonatomic) unsigned long long theme;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) long long clip;
@property (readonly, nonatomic) CLKVideo *video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasTag:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setHasAssets;
- (void)discardAssets;
- (id)initForDevice:(id)a0 withName:(id)a1 videoName:(id)a2 transitionImageName:(id)a3 overlayColor:(id)a4 theme:(unsigned long long)a5 variant:(long long)a6 clip:(long long)a7 tags:(unsigned long long)a8;
- (BOOL)snapshotDiffers:(id)a0;

@end
