@class NSString;

@interface PFMetadataIdentifier : NSObject

@property (class, readonly) NSString *quickTimeMetadataOriginatingSignature;
@property (class, readonly) NSString *quickTimeMetadataRenderOriginatingSignature;
@property (class, readonly) NSString *quickTimeMetadataContentIdentifier;
@property (class, readonly) NSString *quickTimeMetadataSpatialOverCaptureGroupIdentifier;
@property (class, readonly) NSString *quickTimeMetadataContainsSpatialOverCaptureContent;
@property (class, readonly) NSString *quickTimeMetadataVariationIdentifier;
@property (class, readonly) NSString *quickTimeMetadataLivePhotoMinimumClientVersion;
@property (class, readonly) NSString *quickTimeMetadataCaptureMode;
@property (class, readonly) NSString *quickTimeUserDataVideoLoopingType;
@property (class, readonly) NSString *quickTimeMetadataStillImageTime;
@property (class, readonly) NSString *quickTimeMetadataKeyLocationISO6709;
@property (class, readonly) NSString *quickTimeMetadataKeyActionVideoStabilizationStrength;
@property (class, readonly) NSString *quickTimeMetadataVitalityTransitionScore;
@property (class, readonly) NSString *quickTimeMetadataLivePhotoVitalityDisabled;
@property (class, readonly) NSString *quickTimeMetadataLivePhotoVitalityLimitingAllowed;
@property (class, readonly) NSString *quickTimeMetadataCinematicVideoRendering;
@property (class, readonly) NSString *quickTimeMetadataCinematicVideoCinematography;
@property (class, readonly) NSString *quicktimeMetadataCameraLensModel;
@property (class, readonly) NSString *quicktimeMetadataCameraFocalLength35mmEquivalent;
@property (class, readonly) NSString *quicktimeMetadataSpatialVideoRecommendedForImmersiveMode;

@end
