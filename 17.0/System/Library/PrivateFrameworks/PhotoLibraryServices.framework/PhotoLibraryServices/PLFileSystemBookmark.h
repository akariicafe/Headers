@class NSData, NSString, PLInternalResource;

@interface PLFileSystemBookmark : PLManagedObject

@property (retain, nonatomic) NSData *bookmarkData;
@property (retain, nonatomic) NSString *pathRelativeToVolume;
@property (retain, nonatomic) PLInternalResource *resource;

+ (id)entityName;
+ (id)fileSystemBookmarkFromURL:(id)a0 context:(id)a1;

- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (BOOL)supportsCloudUpload;
- (id)fileSystemURL;

@end
