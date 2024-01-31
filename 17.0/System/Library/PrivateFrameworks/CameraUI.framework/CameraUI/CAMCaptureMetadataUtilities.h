@interface CAMCaptureMetadataUtilities : NSObject

+ (id)preciseCaptureDateFromStillImageMetadata:(id)a0;
+ (id)metadataFromRequest:(id)a0;
+ (void)removeUnwantedKeysForPersistenceFromMetadata:(id)a0;
+ (id)metadataFromPanoramaRequest:(id)a0;

@end
