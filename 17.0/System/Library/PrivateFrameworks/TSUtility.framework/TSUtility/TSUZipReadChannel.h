@class NSString, TSUZipEntry, NSObject;
@protocol OS_dispatch_queue, TSUReadChannel;

@interface TSUZipReadChannel : NSObject <TSUStreamReadChannel> {
    TSUZipEntry *_entry;
    id<TSUReadChannel> _archiveReadChannel;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (BOOL)readFileHeaderFromData:(id)a0 headerLength:(unsigned long long *)a1;
- (void)handleFailureWithQueue:(id)a0 handler:(id /* block */)a1 error:(id)a2;
- (id)initWithEntry:(id)a0 archiveReadChannel:(id)a1;
- (BOOL)processData:(id)a0 CRC:(unsigned int *)a1 isDone:(BOOL)a2 queue:(id)a3 handler:(id /* block */)a4;
- (void)readWithHeaderLength:(unsigned long long)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)readWithQueue:(id)a0 handler:(id /* block */)a1;

@end
