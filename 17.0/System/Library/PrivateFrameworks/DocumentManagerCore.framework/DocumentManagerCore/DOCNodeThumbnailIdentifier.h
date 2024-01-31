@class NSString, NSDate;

@interface DOCNodeThumbnailIdentifier : NSObject <NSCopying>

@property (retain) id nodeIdentifier;
@property (retain) NSDate *modificationDate;
@property (retain) id contentVersion;
@property unsigned long long folderType;
@property BOOL isTopLevelSharedItem;
@property BOOL isDownloaded;
@property (retain) NSString *fileExtension;
@property BOOL isActionable;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
