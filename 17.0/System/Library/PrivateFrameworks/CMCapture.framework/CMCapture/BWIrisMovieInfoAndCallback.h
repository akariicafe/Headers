@class BWIrisMovieInfo;

@interface BWIrisMovieInfoAndCallback : NSObject

@property (readonly, nonatomic) BWIrisMovieInfo *info;
@property (readonly, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL processed;
@property (nonatomic) double overCaptureQualityScore;
@property (nonatomic) unsigned int overCaptureQualityScoringVersion;

+ (id)movieInfoAndCallbackWithMovieInfo:(id)a0 callback:(id /* block */)a1;

- (void)dealloc;

@end
