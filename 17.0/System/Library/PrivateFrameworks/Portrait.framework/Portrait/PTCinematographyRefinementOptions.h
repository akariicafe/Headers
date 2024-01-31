@class PTGlobalCinematographyMetadata, PTCinematographyFocusFramesOptions;

@interface PTCinematographyRefinementOptions : NSObject <NSCopying> {
    PTGlobalCinematographyMetadata *_globalMetadata;
}

@property (retain) PTCinematographyFocusFramesOptions *focusFramesOptions;
@property (copy, nonatomic) PTGlobalCinematographyMetadata *globalMetadata;
@property (nonatomic) BOOL disableDetectionSmoothing;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } rackFocusPullTime;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
