@interface PHImageDecoderOptions : NSObject

@property (nonatomic) BOOL shouldLoadGainMap;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long resizeMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedCropRect;
@property (nonatomic) BOOL optimizeForDrawing;
@property (nonatomic) BOOL highPriority;
@property (nonatomic) BOOL waitUntilComplete;
@property (nonatomic) BOOL allowFallbackDecoder;
@property (nonatomic) BOOL preferSWDecode;
@property (nonatomic) BOOL useLowMemoryMode;
@property (nonatomic) BOOL decodeAsHDR;
@property (readonly, nonatomic) long long maximumLongSideLength;
@property (readonly, nonatomic) BOOL shouldCrop;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
