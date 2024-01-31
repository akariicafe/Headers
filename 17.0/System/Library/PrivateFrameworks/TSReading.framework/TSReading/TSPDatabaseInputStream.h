@class NSString;

@interface TSPDatabaseInputStream : NSObject <TSUStreamReadChannel, SFUInputStream> {
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
- (id)initWithBlob:(struct sqlite3_blob { } *)a0;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (void)readWithQueue:(id)a0 handler:(id /* block */)a1;

@end
