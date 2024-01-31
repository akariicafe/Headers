@class TSPTemporaryDataStorageURL;
@protocol TSPCryptoInfo;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    TSPTemporaryDataStorageURL *_temporaryDataStorageURL;
    BOOL _leakTemporaryFile;
    BOOL _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> _decryptionInfo;
}

@property (readonly, nonatomic) BOOL isMissingOriginalData;
@property (readonly, nonatomic) BOOL isMissingData;

- (id)init;
- (void)dealloc;
- (unsigned long long)length;
- (void).cxx_destruct;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (unsigned long long)fileFormatVersion;
- (BOOL)isLengthPrecise;
- (id)decryptionInfo;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1 isMissingOriginalData:(BOOL)a2 isMissingData:(BOOL)a3 isUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)a4;
- (BOOL)isUnmaterializedDueToPartiallyDownloadedDocument;
- (void)leakTemporaryFile;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (unsigned long long)materializedLength;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)a0;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;

@end
