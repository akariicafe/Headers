@class NSString, NSData;

@interface OISFUMemoryInputStream : NSObject <OISFUBufferedInputStream> {
    NSData *mData;
    const char *mStart;
    const char *mCurrent;
    const char *mEnd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)dealloc;
- (void)seekToOffset:(long long)a0;
- (long long)offset;
- (id)initWithData:(id)a0;
- (BOOL)canSeek;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (id)initWithData:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2;
- (unsigned long long)readToOwnBuffer:(const char **)a0 size:(unsigned long long)a1;
- (BOOL)seekWithinBufferToOffset:(long long)a0;

@end
