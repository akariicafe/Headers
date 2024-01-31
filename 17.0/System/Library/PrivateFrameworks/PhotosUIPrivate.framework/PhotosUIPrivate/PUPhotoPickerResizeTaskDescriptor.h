@class NSString, NSCountedSet;

@interface PUPhotoPickerResizeTaskDescriptor : NSObject <NSCopying> {
    NSCountedSet *_cachedAssetsIdentifiersForEstimation;
    unsigned long long _cachedSizeEstimate;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, copy, nonatomic) NSString *localizedDescription;

+ (id)defaultActualSizeDescriptor;
+ (id)defaultLargeDescriptor;
+ (id)defaultMediumDescriptor;
+ (id)defaultSmallDescriptor;
+ (id)orderedDefaultDescriptors;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)appliesToAsset:(id)a0;
- (unsigned long long)estimatedSizeForAssets:(id)a0;
- (id)formattedSizeForAssets:(id)a0;
- (id)initWithLocalizedDescription:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (id)localizedDescriptionForAssets:(id)a0;

@end
