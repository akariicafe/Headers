@class NSOutputStream, NSString, NSDictionary, NSURL, NSProgress;
@protocol SYStreamEventHandlerBlocks, SYStreamThroughputCounter;

@interface SYOutputStreamTransaction : NSObject <SYStreamTransaction>

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSOutputStream<SYStreamEventHandlerBlocks, SYStreamThroughputCounter> *outputStream;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (BOOL)prepare:(id *)a0;
- (id)finalizeOutput:(id *)a0;

@end
