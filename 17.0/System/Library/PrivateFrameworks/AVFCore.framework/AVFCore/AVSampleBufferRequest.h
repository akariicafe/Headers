@class AVSampleCursor, AVSampleBufferRequestInternal;

@interface AVSampleBufferRequest : NSObject {
    AVSampleBufferRequestInternal *_request;
}

@property (readonly, retain, nonatomic) AVSampleCursor *startCursor;
@property (nonatomic) long long direction;
@property (retain, nonatomic) AVSampleCursor *limitCursor;
@property (nonatomic) long long preferredMinSampleCount;
@property (nonatomic) long long maxSampleCount;
@property (nonatomic) long long mode;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } overrideTime;

+ (id)sampleBufferRequestWithStartCursor:(id)a0;

- (id)init;
- (void)dealloc;
- (unsigned int)_figSampleGeneratorReadFlags;
- (int)_figSampleGeneratorReadPolicy;
- (id)initWithStartCursor:(id)a0;

@end
