@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (id)filename;
- (id)parentIdentifier;
- (BOOL)isFolder;
- (unsigned long long)size;
- (id)identifier;
- (id)description;
- (BOOL)isDownloaded;
- (BOOL)isMaterializedOnDisk;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;

@end
