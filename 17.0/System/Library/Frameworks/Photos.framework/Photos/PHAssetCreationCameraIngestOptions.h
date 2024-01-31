@class NSString;

@interface PHAssetCreationCameraIngestOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSString *cameraMetadataPath;
@property (copy, nonatomic) NSString *dbgFilePath;
@property (copy, nonatomic) NSString *photoIrisAssetUUID;
@property (nonatomic) BOOL isRearFacingCamera;
@property (nonatomic) double finalAssetHeight;
@property (nonatomic) double finalAssetWidth;

+ (BOOL)supportsSecureCoding;

- (id)initWithXPCDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeToXPCDict:(id)a0;
- (id)initFromJobDictionary:(id)a0;
- (id)initWithCameraMetadataPath:(id)a0 isCameraRearFacing:(BOOL)a1 finalAssetHeight:(double)a2 finalAssetWidth:(double)a3 dbgFilePath:(id)a4 photoIrisAssetUUID:(id)a5;

@end
