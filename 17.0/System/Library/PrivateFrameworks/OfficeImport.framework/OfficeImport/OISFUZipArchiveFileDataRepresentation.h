@class NSString, OISFUFileDataRepresentation;

@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    OISFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReadable;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (BOOL)isEncrypted;
- (id)path;
- (id)inputStream;
- (long long)dataLength;
- (id)bufferedInputStreamWithOffset:(long long)a0 length:(long long)a1;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)inputStreamWithOffset:(long long)a0 length:(long long)a1;

@end
