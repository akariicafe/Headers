@class IrisVideoMetadataExtractor, NSArray, NSDictionary, ExifMetadataExtractor, NSMutableDictionary;

@interface PregateFeatureBuilder : NSObject

@property struct vector<CMTime, std::allocator<CMTime>> { struct *__begin_; struct *__end_; struct __compressed_pair<CMTime *, std::allocator<CMTime>> { struct *__value_; } __end_cap_; } frameTimes;
@property struct vector<FloatPoint, std::allocator<FloatPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<FloatPoint *, std::allocator<FloatPoint>> { struct *__value_; } __end_cap_; } frameOffsets;
@property struct vector<FloatPoint, std::allocator<FloatPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<FloatPoint *, std::allocator<FloatPoint>> { struct *__value_; } __end_cap_; } frameBlurVectors;
@property (retain) NSArray *stdProcessInputKeysArray;
@property (retain) NSDictionary *stillImageMetadata;
@property (retain) NSArray *facesArray;
@property (retain) NSArray *movieMetadata;
@property (retain) NSDictionary *videoTrackMetadataDict;
@property (retain) IrisVideoMetadataExtractor *irisVideoExtractor;
@property (retain) ExifMetadataExtractor *irisStillExtractor;
@property (readonly) NSMutableDictionary *featuresDict;
@property (readonly) NSMutableDictionary *fullFeaturesDict;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildFullDictionary;
- (int)fillVector:(void *)a0 withPerFrameStats:(id)a1;
- (int)processBlurVectors;
- (int)processFullDictionary:(BOOL)a0;
- (int)processMovieMetadata;
- (int)processOffsetVectors;
- (int)processPresentationTimes;
- (int)processStandardPerFrameKeys;
- (int)processStill;
- (int)processStillImageFaceData;
- (int)processStillImageMetadata;
- (int)processStillInternal;
- (int)processVidTrackMetadata;
- (int)processVideo;
- (int)processVideoFaceInfo;
- (int)processVideoInternal;
- (int)readPerFrameMetadataToArrays;
- (int)standardProcessKey:(id)a0 addToDictionary:(id)a1;

@end
