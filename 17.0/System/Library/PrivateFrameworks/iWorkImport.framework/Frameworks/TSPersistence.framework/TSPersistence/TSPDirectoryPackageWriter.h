@class TSPDirectoryPackageDataWriter;

@interface TSPDirectoryPackageWriter : TSPPackageWriter {
    TSPDirectoryPackageDataWriter *_dataWriter;
}

- (void).cxx_destruct;
- (struct CGDataConsumer { } *)newCGDataConsumerAtRelativePath:(id)a0;
- (id)initWithURL:(id)a0 documentTargetURL:(id)a1 relativeURLForExternalData:(id)a2 packageIdentifier:(unsigned char)a3 documentProperties:(id)a4 documentMetadata:(id)a5 fileFormatVersion:(unsigned long long)a6 updateType:(long long)a7 cloneMode:(BOOL)a8 documentSaveValidationPolicy:(id)a9 encryptionKey:(id)a10 originalDocumentPackage:(id)a11 originalSupportPackage:(id)a12 fileCoordinatorDelegate:(id)a13 progress:(id)a14 error:(id *)a15;
- (id)linkOrCopyData:(id)a0 fromURL:(id)a1 fromTemporaryLocation:(BOOL)a2 decryptionInfo:(id)a3 preferredFilename:(id)a4 error:(id *)a5;
- (id)newPackageWithPackageIdentifier:(unsigned char)a0 documentProperties:(id)a1 fileFormatVersion:(unsigned long long)a2 decryptionKey:(id)a3 fileCoordinatorDelegate:(id)a4;
- (id)newRawComponentWriteChannelWithPackageLocator:(id)a0 storeOutsideObjectArchive:(BOOL)a1;
- (id)newRawDataWriteChannelForRelativePath:(id)a0 originalLastModificationDate:(id)a1 originalSize:(unsigned long long)a2 originalCRC:(unsigned int)a3 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)a4;
- (id)packageEntryInfoForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1 packageURL:(id)a2;
- (id)targetDataURLForPath:(id)a0;
- (BOOL)writeData:(id)a0 toRelativePath:(id)a1 allowEncryption:(BOOL)a2 error:(id *)a3;

@end
