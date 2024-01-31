@class NSArray, NSDictionary, NSSet, NSString;

@interface IMDirectoryContents : NSObject

@property (retain, nonatomic) NSDictionary *fileInfoMap;
@property (retain, nonatomic) NSArray *sortedPaths;
@property (retain, nonatomic) NSArray *topLevelPaths;
@property (retain, nonatomic) NSArray *attachmentPaths;
@property (retain, nonatomic) NSArray *syncAssetPaths;
@property (retain, nonatomic) NSSet *allPaths;
@property (readonly, nonatomic) NSString *rootPath;
@property (readonly, nonatomic) NSString *attachmentsPath;
@property (readonly, nonatomic) NSString *syncAssetsPath;
@property (readonly, nonatomic) NSString *stickersPath;

+ (BOOL)isGroupPhotoPath:(id)a0;

- (void).cxx_destruct;
- (void)gather;
- (id)initWithRootPath:(id)a0 attachmentsPath:(id)a1 syncAssetsPath:(id)a2 stickersPath:(id)a3;
- (BOOL)isAttachmentPath:(id)a0;
- (BOOL)isStickerPath:(id)a0;
- (BOOL)isSyncAssetPath:(id)a0;
- (void)recursivelyGatherFileInfoAtPath:(id)a0 fileInfoMap:(id)a1;

@end
