@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TSPDatabaseInputStream : NSObject <TSUStreamReadChannel, SFUInputStream> {
    NSObject<OS_dispatch_queue> *_readQueue;
    struct sqlite3_blob { } *_blob;
    int _offset;
    int _length;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)dealloc;
- (void)seekToOffset:(long long)a0;
- (long long)offset;
- (BOOL)canSeek;
- (void).cxx_destruct;
- (id)initWithBlob:(struct sqlite3_blob { } *)a0;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (void)readWithHandler:(id /* block */)a0;
- (void)readWithHandlerAndWait:(id /* block */)a0;

@end
