@class NSError;

@interface FIFolderSize : NSObject

@property (readonly, nonatomic) long long totalItems;
@property (readonly, nonatomic) long long userVisibleItems;
@property (readonly, nonatomic) long long logicalBytes;
@property (readonly, nonatomic) long long compressionAdjustedLogicalBytes;
@property (readonly, nonatomic) long long physicalBytes;
@property (readonly, nonatomic) long long skippedItemCount;
@property (readonly, nonatomic) long long folderCount;
@property (readonly, copy, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
