@class NSString;

@interface GEOAnalyticsDataFile : NSObject {
    BOOL _forWrite;
    int _fd;
    struct { unsigned int header_magic; unsigned int header_len; } _hdr;
    struct iovec { void *iov_base; unsigned long long iov_len; } _iov[2];
    NSString *_filePath;
}

- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (void)commonInitWithMagic:(unsigned int)a0;
- (id)initForReadWithFileMagic:(unsigned int)a0 fileDescriptor:(int)a1;
- (id)initForReadWithFileMagic:(unsigned int)a0 filePath:(id)a1;
- (id)initForWriteWithFileMagic:(unsigned int)a0 filePath:(id)a1;
- (BOOL)prepareFileWithFilePath:(id)a0 isForWrite:(BOOL)a1;
- (int)unlinkAndReturnOpenFileDescriptor;
- (BOOL)unsafe_readAnalyticDataWithVisitorBlock:(id /* block */)a0;
- (BOOL)writeAnalyticData:(id)a0;

@end
