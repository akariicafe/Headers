@class NSString;
@protocol SFUOutputStream;

@interface OISFUOffsetOutputStream : NSObject <SFUOutputStream> {
    id<SFUOutputStream> mOutputStream;
    long long mInitialOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)dealloc;
- (long long)offset;
- (id)inputStream;
- (BOOL)canSeek;
- (id)initWithOutputStream:(id)a0;
- (id)closeLocalStream;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
