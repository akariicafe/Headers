@class NSString;

@interface IMDiskSpaceFileInfo : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) struct IMFileSize { unsigned long long file_size; unsigned long long disk_allocation_size; } fileSize;
@property (readonly, nonatomic) BOOL isAttachment;
@property (readonly, nonatomic) BOOL isSyncAsset;
@property (readonly, nonatomic) BOOL isPurgableOnDisk;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isSticker;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *fileExtension;

- (void)log;
- (void).cxx_destruct;
- (id)logString;
- (void)addLogItems:(id)a0;
- (id)initWithPath:(id)a0 fileSize:(struct IMFileSize { unsigned long long x0; unsigned long long x1; })a1 isDirectory:(BOOL)a2 isAttachment:(BOOL)a3 isSyncAsset:(BOOL)a4 isSticker:(BOOL)a5 isPurgableOnDisk:(BOOL)a6;

@end
