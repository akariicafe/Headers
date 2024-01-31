@class PXExtendedTraitCollectionSnapshot, NSNumber;

@interface PXStoryExportVideoOptions : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } resolution;
@property (nonatomic) BOOL prefersExportLayoutMatchesPlayback;
@property (retain, nonatomic) PXExtendedTraitCollectionSnapshot *fullSizePlayerExtendedTraitCollectionSnapshot;
@property (nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } resolutionInPixels;
@property (retain, nonatomic) NSNumber *averageBitratePerSecond;
@property (nonatomic) unsigned long long frameRate;
@property (nonatomic) unsigned long long codec;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
