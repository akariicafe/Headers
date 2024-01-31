@class NSArray, NSMutableArray;

@interface BPSZipMany : BPSPublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (nonatomic) unsigned long long bufferResultCount;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (BOOL)completed;
- (id)init;
- (void)reset;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (id)initWithPublishers:(id)a0;
- (void).cxx_destruct;
- (void)_resetBuffer;
- (id)_tryConstructResultArray;

@end
