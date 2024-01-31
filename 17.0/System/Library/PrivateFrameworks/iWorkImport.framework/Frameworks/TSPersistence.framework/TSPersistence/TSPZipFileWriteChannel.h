@class NSString, TSUZipFileWriter, NSObject;
@protocol OS_dispatch_queue;

@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel> {
    TSUZipFileWriter *_archiveWriter;
    NSObject<OS_dispatch_queue> *_writerQueue;
    _Atomic BOOL _isClosed;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (id)init;
- (void)flushWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)a0;
- (void)setLowWater:(unsigned long long)a0;
- (void)writeData:(id)a0 handler:(id /* block */)a1;
- (id)initWithArchiveWriter:(id)a0;

@end
