@class AVAsset, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface IrisVideoMetadataExtractor : NSObject

@property (retain) AVAsset *inMovieAsset;
@property (retain) NSMutableArray *desiredIrisKeysArray;
@property (readonly) NSArray *framesMetadataArray;
@property (readonly) NSMutableDictionary *videoTrackMetadataDict;
@property BOOL processedFile;
@property BOOL saveAllMetadata;
@property (readonly) NSDictionary *allMetadata;

- (id)init;
- (void).cxx_destruct;
- (int)AddInfoFromMetadata:(id)a0 withTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toArray:(id)a2;
- (void)AddFrameDictionary:(id)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toArray:(id)a2;
- (int)processFile;
- (int)processStillFrameTimeForAsset:(id)a0 toDictionary:(id)a1;
- (int)processVideoTrack:(id)a0;

@end
