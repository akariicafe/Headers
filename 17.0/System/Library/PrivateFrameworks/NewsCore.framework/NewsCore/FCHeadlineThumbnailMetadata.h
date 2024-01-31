@class FCColor, FCHeadlineThumbnailImageMetadata;

@interface FCHeadlineThumbnailMetadata : NSObject

@property (readonly, nonatomic) FCColor *textColor;
@property (readonly, nonatomic) FCColor *backgroundColor;
@property (readonly, nonatomic) FCColor *accentColor;
@property (readonly, nonatomic) FCColor *primaryColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } focalFrame;
@property (nonatomic) unsigned long long focalFrameBuffer;
@property (readonly, nonatomic) FCHeadlineThumbnailImageMetadata *lowQualityImage;
@property (readonly, nonatomic) FCHeadlineThumbnailImageMetadata *defaultQualityImage;
@property (readonly, nonatomic) FCHeadlineThumbnailImageMetadata *mediumQualityImage;
@property (readonly, nonatomic) FCHeadlineThumbnailImageMetadata *highQualityImage;
@property (readonly, nonatomic) FCHeadlineThumbnailImageMetadata *ultraQualityImage;
@property (readonly, nonatomic) BOOL hasThumbnail;

- (void).cxx_destruct;
- (id)initWithTextColor:(id)a0 backgroundColor:(id)a1 accentColor:(id)a2 primaryColor:(id)a3 focalFrame:(unsigned long long)a4 lowQualityImage:(id)a5 defaultQualityImage:(id)a6 mediumQualityImage:(id)a7 highQualityImage:(id)a8 ultraQualityImage:(id)a9;

@end
