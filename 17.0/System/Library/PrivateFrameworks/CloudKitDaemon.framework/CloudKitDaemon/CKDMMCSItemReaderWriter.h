@class NSString, NSFileHandle, CKDMMCSItemGroupContext, CKDMMCSItem, C3DownloadChunkContext;

@interface CKDMMCSItemReaderWriter : NSObject <CKDMMCSItemReaderWriterProtocol>

@property (retain, nonatomic) C3DownloadChunkContext *downloadChunkContext;
@property (retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest;
@property (retain, nonatomic) CKDMMCSItem *MMCSItem;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)closeWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)writeBytesAtOffset:(unsigned long long)a0 bytes:(char *)a1 length:(unsigned long long)a2 bytesWritten:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)readBytesAtOffset:(unsigned long long)a0 bytes:(char *)a1 length:(unsigned long long)a2 bytesRead:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)openWithError:(id *)a0;
- (id)initWithMMCSItem:(id)a0 MMCSRequest:(id)a1 downloadChunkContext:(id)a2;
- (id)getFileMetadataWithError:(id *)a0;

@end
