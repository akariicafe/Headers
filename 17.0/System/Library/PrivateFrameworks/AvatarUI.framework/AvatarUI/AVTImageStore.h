@class NSFileManager, NSString, NSURL, NSObject;
@protocol OS_dispatch_queue, AVTUILogger, AVTImageEncoder;

@interface AVTImageStore : NSObject <AVTImageCache>

@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) id<AVTImageEncoder> imageEncoder;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) BOOL validateImages;
@property (readonly, copy, nonatomic) NSURL *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearContentAtLocation:(id)a0 logger:(id)a1;
+ (id)resourceURLForItem:(id)a0 scope:(id)a1 baseURL:(id)a2 encoder:(id)a3;

- (void).cxx_destruct;
- (id)_imageForItem:(id)a0 scope:(id)a1 cacheMissHandler:(id /* block */)a2;
- (BOOL)applyFileProtectionForResourceAtURL:(id)a0 error:(id *)a1;
- (BOOL)copyImagesForPersistentIdentifierPrefix:(id)a0 toPersistentIdentifierPrefix:(id)a1 error:(id *)a2;
- (BOOL)createDirectoryIfNeeded:(id *)a0;
- (BOOL)deleteImagesForItemsWithPersistentIdentifierPrefix:(id)a0 error:(id *)a1;
- (id)imageForItem:(id)a0 scope:(id)a1;
- (id)imageForItem:(id)a0 scope:(id)a1 cacheMissHandler:(id /* block */)a2;
- (id)imageForItem:(id)a0 scope:(id)a1 error:(id *)a2;
- (id)initWithEnvironment:(id)a0 validateImages:(BOOL)a1 location:(id)a2;
- (id)initWithEnvironment:(id)a0 validateImages:(BOOL)a1 location:(id)a2 encoder:(id)a3;
- (void)performStateWork:(id /* block */)a0;
- (BOOL)resourceExistsInCacheForItem:(id)a0 scope:(id)a1;
- (id)resourceForItem:(id)a0 scope:(id)a1;
- (id)resourceForItem:(id)a0 scope:(id)a1 cacheMissHandler:(id /* block */)a2;
- (id)resourceURLForItem:(id)a0 scope:(id)a1;
- (BOOL)saveImage:(id)a0 forItem:(id)a1 scope:(id)a2 error:(id *)a3;
- (BOOL)saveImage:(id)a0 withImageData:(id)a1 forItem:(id)a2 scope:(id)a3 error:(id *)a4;

@end
