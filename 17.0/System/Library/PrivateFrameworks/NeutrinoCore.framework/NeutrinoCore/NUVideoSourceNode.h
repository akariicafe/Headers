@class AVAsset, NSArray, NSURL, NSData, NSObject, NSDictionary;
@protocol OS_dispatch_queue;

@interface NUVideoSourceNode : NUSourceNode {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loaded;
    NSURL *_URL;
    NSData *_videoData;
    AVAsset *_asset;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
    struct { long long width; long long height; } _size;
    struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } _cleanAperture;
    long long _orientation;
    struct { long long width; long long height; } _disparitySize;
    struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } _originalExtent;
    NSArray *_metadata;
    NSArray *_trackGroups;
    NSDictionary *_colorProperties;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _livePhotoKeyFrameTime;
}

@property (readonly) struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; } cleanAperture;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) BOOL isHDR;

- (BOOL)load:(out id *)a0;
- (BOOL)_load:(out id *)a0;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)_evaluateVideo:(out id *)a0;
- (id)asset:(out id *)a0;
- (BOOL)requiresAudioMix;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)sourceOptionsForSettings:(id)a0 error:(out id *)a1;
- (id)initWithURL:(id)a0 identifier:(id)a1 options:(id)a2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)_evaluateTimedMetadataSampleWithIdentifier:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(out id *)a2;
- (id)_evaluateVideoAttributes:(out id *)a0;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (void)_initializeQueue;
- (id)_settingsForPipelineState:(id)a0 ownedFrame:(BOOL)a1;
- (id)initWithVideoData:(id)a0 identifier:(id)a1 options:(id)a2;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;
- (id)preparedNodeWithSourceContainer:(id)a0 pipelineState:(id)a1 pipelineSettings:(id)a2 sourceSettings:(id)a3 error:(out id *)a4;
- (long long)sourceOrientation;
- (BOOL)supportsPipelineState:(id)a0 error:(out id *)a1;

@end
