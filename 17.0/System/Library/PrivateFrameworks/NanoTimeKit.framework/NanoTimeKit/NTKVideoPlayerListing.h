@class UIColor, NSArray, CLKVideo, NSString, NSURL, CLKDevice;

@interface NTKVideoPlayerListing : NSObject <NTKAVListing, NSCopying> {
    CLKDevice *_device;
    CLKVideo *_video;
    NSString *_filename;
    NSURL *_url;
}

@property (retain, nonatomic) NSArray *attributes;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) unsigned long long endBehavior;
@property (readonly, nonatomic) CLKVideo *video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listingForDevice:(id)a0 withFilename:(id)a1;
+ (id)listingForDevice:(id)a0 withFilename:(id)a1 andColor:(id)a2;
+ (id)listingForDevice:(id)a0 withURL:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)discardAssets;
- (id)initForDevice:(id)a0 withFilename:(id)a1;
- (id)initForDevice:(id)a0 withURL:(id)a1;
- (BOOL)snapshotDiffers:(id)a0;

@end
