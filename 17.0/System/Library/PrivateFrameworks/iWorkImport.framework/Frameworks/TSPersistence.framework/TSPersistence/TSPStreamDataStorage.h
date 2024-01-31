@class NSString, TSUColor;
@protocol TSPCryptoInfo;

@interface TSPStreamDataStorage : NSObject <TSPDataStorage>

@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) BOOL isMissingData;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long materializedLength;
@property (readonly, nonatomic) unsigned long long reservedLength;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly, nonatomic) id<TSPCryptoInfo> decryptionInfo;
@property (readonly, nonatomic) BOOL isLengthPrecise;
@property (readonly, nonatomic) unsigned long long firstUnmaterializedIndex;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) BOOL canDownload;
@property (nonatomic) BOOL isUnmaterializedDueToPartiallyDownloadedDocument;
@property (nonatomic) long long uploadStatus;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned int CRC;
@property (readonly, nonatomic) TSUColor *fallbackColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)NSDataWithOptions:(unsigned long long)a0;
- (id)filenameForPreferredFilename:(id)a0;
- (BOOL)isInPackage:(id)a0;
- (struct CGDataProvider { } *)newCGDataProvider;
- (struct CGImageSource { } *)newCGImageSource;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (id)AVAssetWithOptions:(id)a0 forData:(id)a1;
- (id)AVAssetWithOptions:(id)a0 usingResourceLoaderForData:(id)a1;
- (BOOL)archiveInfoMessage:(void *)a0 archiver:(id)a1 packageWriter:(id)a2;
- (id)newDataCopyInputStreamProviderWithDocumentURL:(id)a0 encryptionInfo:(id)a1 error:(id *)a2;
- (id)newDataCopyReadChannelProviderWithDocumentURL:(id)a0 encryptionInfo:(id)a1 error:(id *)a2;
- (id)newDataCopyURLProviderWithDocumentURL:(id)a0 encryptionInfo:(id)a1 error:(id *)a2;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;

@end
