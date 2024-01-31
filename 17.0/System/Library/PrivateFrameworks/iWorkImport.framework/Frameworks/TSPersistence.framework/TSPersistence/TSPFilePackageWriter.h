@class TSUSafeSaveAssistant, TSUZipFileWriter;

@interface TSPFilePackageWriter : TSPPackageWriter {
    TSUZipFileWriter *_delayedZipArchiveWriter;
    TSUSafeSaveAssistant *_safeSaveAssistant;
    BOOL _onlyWriteToDelayedZipArchive;
}

- (void).cxx_destruct;
- (void)closeWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)componentZipArchiveWriter;
- (void)finalizeComponentAndDataSectionWithCompletionHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0 documentTargetURL:(id)a1 relativeURLForExternalData:(id)a2 packageIdentifier:(unsigned char)a3 documentProperties:(id)a4 documentMetadata:(id)a5 fileFormatVersion:(unsigned long long)a6 updateType:(long long)a7 cloneMode:(BOOL)a8 documentSaveValidationPolicy:(id)a9 encryptionKey:(id)a10 originalDocumentPackage:(id)a11 originalSupportPackage:(id)a12 fileCoordinatorDelegate:(id)a13 progress:(id)a14 error:(id *)a15;
- (id)newPackageWithPackageIdentifier:(unsigned char)a0 documentProperties:(id)a1 fileFormatVersion:(unsigned long long)a2 decryptionKey:(id)a3 fileCoordinatorDelegate:(id)a4;
- (id)newRawDataWriteChannelForRelativePath:(id)a0 originalLastModificationDate:(id)a1 originalSize:(unsigned long long)a2 originalCRC:(unsigned int)a3 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)a4;
- (void)truncateZipAtFirstDeletedData:(id)a0;
- (void)willWriteData:(id)a0;
- (id)zipArchiveWriter;

@end
