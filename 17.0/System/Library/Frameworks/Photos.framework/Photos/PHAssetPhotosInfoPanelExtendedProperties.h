@class NSString, NSNumber, NSDate;

@interface PHAssetPhotosInfoPanelExtendedProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSString *cameraMake;
@property (readonly, nonatomic) NSString *cameraModel;
@property (readonly, nonatomic) NSString *formattedCameraModel;
@property (readonly, nonatomic) NSString *lensModel;
@property (readonly, nonatomic) NSNumber *flashFired;
@property (readonly, nonatomic) NSNumber *whiteBalance;
@property (readonly, nonatomic) NSNumber *meteringMode;
@property (readonly, nonatomic) NSNumber *iso;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;
@property (readonly, nonatomic) NSNumber *exposureBias;
@property (readonly, nonatomic) NSNumber *aperture;
@property (readonly, nonatomic) NSNumber *shutterSpeed;
@property (readonly, nonatomic) NSString *codec;
@property (readonly, nonatomic) NSNumber *fps;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *sampleRate;
@property (readonly, nonatomic) NSNumber *bitrate;
@property (readonly, nonatomic) NSNumber *trackFormat;
@property (readonly, nonatomic) NSNumber *semanticStylePreset;
@property (readonly, nonatomic) NSNumber *digitalZoomRatio;
@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSNumber *timezoneOffset;
@property (readonly, nonatomic) NSString *timezoneName;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
