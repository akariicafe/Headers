@class UTType, NSString, FPItem, NSDate, NSURL, NSError, NSArray, NSPersonNameComponents, NSProgress, NSNumber;

@interface DocumentManagerExecutables.DOCICloudRootNode : FICustomNode {
    void /* unknown type, empty encoding */ deferredCreationNode;
    void /* unknown type, empty encoding */ observerBlock;
    void /* unknown type, empty encoding */ iCloudContainer;
    void /* unknown type, empty encoding */ appLibrariesContainer;
    void /* unknown type, empty encoding */ providerDomain;
}

@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) FPItem *fpfs_fpItem;
@property (nonatomic, readonly) BOOL supportsFileSystemEnumeration;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) NSNumber *childItemCount;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSDate *doc_lastUsedDate;
@property (nonatomic, readonly) NSDate *dateForSortingByRecents;
@property (nonatomic, readonly) BOOL isFolder;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) BOOL isActionable;
@property (nonatomic, readonly) BOOL isReadable;
@property (nonatomic, readonly) BOOL isWritable;
@property (nonatomic, readonly) BOOL isPending;
@property (nonatomic, readonly) BOOL isExternalDownloadPlaceholder;
@property (nonatomic, readonly) BOOL isCloudItem;
@property (nonatomic, readonly) BOOL isContainer;
@property (nonatomic, readonly) BOOL isRootItem;
@property (nonatomic, readonly) BOOL isTrashed;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL downloaded;
@property (nonatomic, readonly) NSProgress *downloadingProgress;
@property (nonatomic, readonly) NSError *downloadingError;
@property (nonatomic, readonly) BOOL uploading;
@property (nonatomic, readonly) BOOL uploaded;
@property (nonatomic, readonly) NSProgress *uploadingProgress;
@property (nonatomic, readonly) NSError *uploadingError;
@property (nonatomic, readonly) NSProgress *copyingProgress;
@property (nonatomic, readonly) BOOL isShared;
@property (nonatomic, readonly) BOOL isSharedByCurrentUser;
@property (nonatomic, readonly) BOOL isTopLevelSharedItem;
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
@property (nonatomic, readonly) NSArray *itemDecorations;
@property (nonatomic, readonly) NSArray *tags;

- (BOOL)isDownloading;
- (BOOL)isUploaded;
- (BOOL)isUploading;
- (BOOL)isDownloaded;
- (long long)_doc_fileTypeCompare:(id)a0;
- (long long)localizedStandardTagsCompareNode:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeNodeWithCoder:(id)a0;

@end
