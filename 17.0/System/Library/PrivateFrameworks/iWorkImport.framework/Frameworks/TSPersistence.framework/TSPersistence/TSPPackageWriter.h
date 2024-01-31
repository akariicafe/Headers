@class NSError, NSString, TSPPackage, NSURL, SFUCryptoKey, TSPDocumentMetadata, NSProgress, NSObject, TSPDocumentSaveValidationPolicy, TSUZipFileWriter;
@protocol TSPFileCoordinatorDelegate, OS_dispatch_queue, TSPComponentWriteChannel;

@interface TSPPackageWriter : NSObject <TSPFileCoordinatorDelegate, TSPPackageDataWriter> {
    TSPDocumentMetadata *_documentMetadata;
    TSPPackage *_originalDocumentPackage;
    TSPPackage *_originalSupportPackage;
    id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
    id<TSPComponentWriteChannel> _componentWriteChannel;
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    TSPPackage *_writtenPackage;
    BOOL _isOpened;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *documentTargetURL;
@property (readonly, nonatomic) NSURL *relativeURLForExternalData;
@property (readonly, nonatomic) long long updateType;
@property (readonly, nonatomic) TSPDocumentSaveValidationPolicy *documentSaveValidationPolicy;
@property (readonly, nonatomic) BOOL canLinkData;
@property (readonly, nonatomic) SFUCryptoKey *encryptionKey;
@property (readonly, nonatomic) TSUZipFileWriter *zipArchiveWriter;
@property (readonly, nonatomic) TSPPackage *originalPackage;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newPackageWriterWithPackageType:(long long)a0 URL:(id)a1 documentTargetURL:(id)a2 relativeURLForExternalData:(id)a3 packageIdentifier:(unsigned char)a4 documentProperties:(id)a5 documentMetadata:(id)a6 fileFormatVersion:(unsigned long long)a7 updateType:(long long)a8 cloneMode:(BOOL)a9 documentSaveValidationPolicy:(id)a10 encryptionKey:(id)a11 originalDocumentPackage:(id)a12 originalSupportPackage:(id)a13 fileCoordinatorDelegate:(id)a14 progress:(id)a15 error:(id *)a16;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (BOOL)closeAndReturnError:(id *)a0;
- (void)closeWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)performReadUsingAccessor:(id /* block */)a0;
- (struct CGDataConsumer { } *)newCGDataConsumerAtRelativePath:(id)a0;
- (BOOL)addData:(id)a0 infoMessage:(void *)a1 saveOperationState:(id)a2 error:(id *)a3;
- (void)closeCurrentChannel;
- (id)componentZipArchiveWriter;
- (void)copyComponent:(id)a0 locator:(id)a1 completion:(id /* block */)a2;
- (id)copyData:(id)a0 withReadChannel:(id)a1 decryptionInfo:(id)a2 size:(unsigned long long)a3 calculateCRC:(BOOL)a4 preferredFilename:(id)a5 error:(id *)a6;
- (id)dataForZipEntry:(id)a0 inDataToWrite:(id)a1;
- (id)filenameForData:(id)a0 preferredFilename:(id)a1;
- (void)finalizeComponentAndDataSectionWithCompletionHandler:(id /* block */)a0;
- (BOOL)flushPendingWritesReturningError:(id *)a0;
- (id)initWithURL:(id)a0 documentTargetURL:(id)a1 relativeURLForExternalData:(id)a2 packageIdentifier:(unsigned char)a3 documentProperties:(id)a4 documentMetadata:(id)a5 fileFormatVersion:(unsigned long long)a6 updateType:(long long)a7 cloneMode:(BOOL)a8 documentSaveValidationPolicy:(id)a9 encryptionKey:(id)a10 originalDocumentPackage:(id)a11 originalSupportPackage:(id)a12 fileCoordinatorDelegate:(id)a13 progress:(id)a14 error:(id *)a15;
- (id)linkOrCopyData:(id)a0 fromURL:(id)a1 fromTemporaryLocation:(BOOL)a2 decryptionInfo:(id)a3 preferredFilename:(id)a4 error:(id *)a5;
- (id)newComponentWriteChannelWithPackageLocator:(id)a0 compressionAlgorithm:(long long)a1 storeOutsideObjectArchive:(BOOL)a2;
- (id)newCompressionComponentWriteChannelWithComponentWriteChannel:(id)a0 compressionAlgorithm:(long long)a1;
- (id)newPackageWithPackageIdentifier:(unsigned char)a0 documentProperties:(id)a1 fileFormatVersion:(unsigned long long)a2 decryptionKey:(id)a3 fileCoordinatorDelegate:(id)a4;
- (id)newRawComponentWriteChannelWithPackageLocator:(id)a0 storeOutsideObjectArchive:(BOOL)a1;
- (id)newRawDataWriteChannelForRelativePath:(id)a0 originalLastModificationDate:(id)a1 originalSize:(unsigned long long)a2 originalCRC:(unsigned int)a3 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)a4;
- (id)packageEntryInfoForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1 packageURL:(id)a2;
- (void)willWriteData:(id)a0;
- (BOOL)writeData:(id)a0 toRelativePath:(id)a1 allowEncryption:(BOOL)a2 error:(id *)a3;
- (id)writtenPackageWithURL:(id)a0;

@end
