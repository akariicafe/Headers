@class NSMutableDictionary;

@interface RPFileTransferResumeStateItem : NSObject {
    NSMutableDictionary *_fileInfo;
}

- (id)itemURL;
- (void)setItemURL:(id)a0;
- (void)dealloc;
- (void)setBytesWritten:(unsigned long long)a0;
- (id)fileName;
- (void)setFileSize:(unsigned long long)a0;
- (void)setFileName:(id)a0;
- (unsigned long long)bytesWritten;
- (void).cxx_destruct;
- (unsigned long long)fileSize;
- (void)setError:(id)a0;
- (id)error;
- (void)setFileModTime:(unsigned long long)a0;
- (unsigned long long)fileModTimeNsec;
- (id)fileInfo;
- (unsigned long long)fileModTime;
- (unsigned long long)fileOffset;
- (id)initWithFileTransferRequestDict:(id)a0;
- (id)initWithStateDict:(id)a0;
- (BOOL)outputFileItemUsable:(id)a0;
- (void)setFileModTimeNsec:(unsigned long long)a0;
- (void)setFileOffset:(unsigned long long)a0;
- (BOOL)sourceFileItemUsable;

@end
