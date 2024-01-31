@class NSString;

@interface SFUGZipFileOutputStream : NSObject <SFUOutputStream> {
    struct gzFile_s { unsigned int x0; char *x1; long long x2; } *_file;
    long long _offset;
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gzipExtension;

- (void)close;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (long long)offset;
- (id)path;
- (id)inputStream;
- (BOOL)canSeek;
- (id)closeLocalStream;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
