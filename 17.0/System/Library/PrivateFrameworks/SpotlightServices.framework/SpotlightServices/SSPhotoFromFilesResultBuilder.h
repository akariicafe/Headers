@interface SSPhotoFromFilesResultBuilder : SSPhotosResultBuilder

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)appBundleId;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildPreviewCommand;
- (id)buildThumbnail;

@end
