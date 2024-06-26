@class NSString, NSProgress, NSURL, MFMimePart, MFAttachmentPlaceholder, MFAttachmentManager;
@protocol MFDataConsumer;

@interface MFAttachment : NSObject <EFCancelable> {
    BOOL _isDataAvailableLocally;
}

@property (nonatomic) MFAttachmentManager *attachmentManager;
@property (readonly) BOOL isContainedInRFC822;
@property (readonly) BOOL isContainedInCompose;
@property (copy) NSString *contentID;
@property (retain, nonatomic) NSProgress *downloadProgress;
@property (nonatomic) unsigned long long lastProgressBytes;
@property (nonatomic) double lastProgressTime;
@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) MFMimePart *part;
@property (copy, nonatomic) NSString *fileName;
@property (readonly) NSString *path;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *disposition;
@property (copy, nonatomic) NSString *remoteImageFileName;
@property (nonatomic) unsigned long long decodedFileSize;
@property (nonatomic) unsigned long long encodedFileSize;
@property (readonly) BOOL isDataAvailableLocally;
@property (readonly) NSString *inferredMimeType;
@property (readonly) NSString *fileUTType;
@property (readonly) BOOL isAutoArchive;
@property BOOL isPlaceholder;
@property (retain, nonatomic) MFAttachmentPlaceholder *placeholder;
@property (copy, nonatomic) id /* block */ fetchCompletionBlock;
@property (retain, nonatomic) id<MFDataConsumer> customConsumer;
@property (nonatomic) BOOL wantsCompletionBlockOffMainThread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mimeType;
- (void)dealloc;
- (id)fileURL;
- (void)fetchData;
- (id)fileName;
- (void)setIsPlaceholder:(BOOL)a0;
- (void)setFileName:(id)a0;
- (void)setMetadataValue:(id)a0 forKey:(id)a1;
- (void)setMimeType:(id)a0;
- (id)path;
- (BOOL)isPlaceholder;
- (unsigned long long)sizeOnDisk;
- (void)resetProgress;
- (id)fileAttributes;
- (void)cancel;
- (id)metadataValueForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isAvailable;
- (BOOL)conformsToType:(id)a0;
- (BOOL)isCached;
- (id)_dataProvider;
- (id)fileNameByStrippingZipIfNeeded:(BOOL)a0;
- (id)fetchDataToURL:(id *)a0;
- (id)_fileUTTypeForFileName:(id)a0;
- (id)attachmentContentTypeForFileName:(id)a0;
- (BOOL)contentTypeConformsToEvent;
- (BOOL)contentTypeConformsToEventICS;
- (BOOL)contentTypeConformsToEventVCS;
- (BOOL)contentTypeConformsToIWork;
- (BOOL)contentTypeConformsToMarkup;
- (BOOL)contentTypeConformsToPassbook;
- (BOOL)contentTypeConformsToProvisionment;
- (BOOL)contentTypeConformsToVCard;
- (id)decodeFilterWithDataConsumer:(id)a0;
- (id)fetchDataSynchronously:(id *)a0;
- (id)fetchDataSynchronously:(id *)a0 stripPrivateMetadata:(BOOL)a1;
- (id)fetchLocalData;
- (id)fetchLocalData:(id *)a0 stripPrivateMetadata:(BOOL)a1;
- (id)fetchPlaceholderData;
- (id)filterData:(id)a0;
- (id)filterICSData:(id)a0;
- (id)filterVCSData:(id)a0;
- (id)initWithURL:(id)a0 attachmentManager:(id)a1;
- (BOOL)isImageFile;
- (BOOL)isMailDrop;
- (BOOL)isMailDropPhotoArchive;
- (id)readFromDisk;
- (id)textEncodingGuessWithData:(id)a0;
- (id)textEncodingNameForData:(id)a0 mimeType:(id)a1;
- (void)updateProgressWithCurrentBytes:(unsigned long long)a0;
- (void)writeToDiskWithData:(id)a0;

@end
