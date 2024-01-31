@class NSString, NSData, NSError, NSNumber;

@interface CMContinuityCaptureStillImageRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long uniqueID;
@property (retain, nonatomic) NSString *compressedFormat;
@property (nonatomic) BOOL highResolutionPhotoEnabled;
@property (nonatomic) int flashMode;
@property (nonatomic) int photoQualityPrioritization;
@property (nonatomic) struct { int width; int height; } maxPhotoDimensions;
@property (nonatomic) BOOL captureComplete;
@property (retain, nonatomic) NSNumber *networkTimestamp;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSData *imageFileData;
@property (nonatomic) unsigned int imageCodecType;
@property (nonatomic) int imageWidth;
@property (nonatomic) int imageHeight;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
