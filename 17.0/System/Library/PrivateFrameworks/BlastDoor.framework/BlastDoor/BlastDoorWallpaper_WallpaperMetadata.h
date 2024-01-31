@class NSString, BlastDoorColor;

@interface BlastDoorWallpaper_WallpaperMetadata : NSObject {
    void /* unknown type, empty encoding */ wallpaper_WallpaperMetadata;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) double fontWeight;
@property (nonatomic, readonly) BlastDoorColor *fontColor;
@property (nonatomic, readonly) BOOL isVertical;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) BlastDoorColor *backgroundColor;

- (id)init;
- (void).cxx_destruct;

@end
