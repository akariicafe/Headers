@class GEOAPURLSessionConfig;

@interface GEOAPUploadStage : NSObject

@property (readonly, nonatomic) GEOAPURLSessionConfig *urlSessionConfig;
@property (readonly, nonatomic) double ttl;

- (void).cxx_destruct;
- (id)initWithURLSessionConfig:(id)a0 ttl:(double)a1;

@end
