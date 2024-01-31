@class NSError, NSString, UTType, NSDate, NSData, NSFileProviderItemVersion, NSDictionary, NSPersonNameComponents, NSNumber;

@interface BRTrashItem : NSObject <NSFileProviderItem>

@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) struct NSFileProviderTypeAndCreator { unsigned int x0; unsigned int x1; } typeAndCreator;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long fileSystemFlags;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, copy, nonatomic) NSNumber *childItemCount;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, copy, nonatomic) NSData *tagData;
@property (readonly, copy, nonatomic) NSNumber *favoriteRank;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic, getter=isUploaded) BOOL uploaded;
@property (readonly, nonatomic, getter=isUploading) BOOL uploading;
@property (readonly, copy, nonatomic) NSError *uploadingError;
@property (readonly, nonatomic, getter=isDownloaded) BOOL downloaded;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, copy, nonatomic) NSError *downloadingError;
@property (readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (readonly, nonatomic) NSData *versionIdentifier;
@property (readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property (readonly, copy, nonatomic) NSString *symlinkTargetPath;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) long long contentPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
