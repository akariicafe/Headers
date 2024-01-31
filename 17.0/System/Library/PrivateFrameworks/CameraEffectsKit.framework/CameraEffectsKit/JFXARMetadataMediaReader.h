@class NSString, NSError, JFXARMetadataMediaReaderItem, NSObject;
@protocol OS_dispatch_queue, JFXMediaMetadataReader;

@interface JFXARMetadataMediaReader : NSObject <JFXMediaMetadataReader>

@property (readonly, nonatomic) id<JFXMediaMetadataReader> reader;
@property (retain, nonatomic) NSError *lastDecodeError;
@property (retain, nonatomic) JFXARMetadataMediaReaderItem *cachedARMetadata;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } readableTimeRange;
@property (nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long signPostID;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithMetadataReader:(id)a0;
- (id)JFX_ARMetadataFromMetadataReaderItem:(id)a0;
- (id)arMetadataItemForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)beginReading;
- (BOOL)beginReadingAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)metadataForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
