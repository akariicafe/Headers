@class NSURL, NSString;
@protocol HFDiskCacheDelegate;

@interface HFDiskCache : HFCache <HFCacheDelegate>

@property (readonly, nonatomic) NSURL *directoryURL;
@property (readonly, weak, nonatomic) id<HFDiskCacheDelegate> diskCacheDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_createCacheEntriesFromFilesOnDisk;
- (void)cache:(id)a0 didEvictObject:(id)a1 forKey:(id)a2 cost:(unsigned long long)a3;
- (void)createCacheEntriesFromFilesOnDisk;
- (id)initWithCacheDirectoryURL:(id)a0 diskCacheDelegate:(id)a1;

@end
