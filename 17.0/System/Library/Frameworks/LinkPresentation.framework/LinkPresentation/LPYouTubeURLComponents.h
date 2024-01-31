@class NSString;

@interface LPYouTubeURLComponents : NSObject

@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) double startTime;

+ (BOOL)parseYouTubeTimeFormat:(id)a0 outTime:(double *)a1;
+ (id)formatAsYouTubeTime:(double)a0;

- (void).cxx_destruct;

@end
