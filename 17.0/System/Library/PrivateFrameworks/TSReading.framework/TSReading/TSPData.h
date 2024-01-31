@class NSString, TSPObjectContext, NSObject, TSPDataManager;
@protocol OS_dispatch_queue, TSPDataStorage;

@interface TSPData : NSObject {
    int _didCull;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSPDataStorage> _storage;
    NSString *_filename;
    TSPDataManager *_manager;
    struct array<unsigned char, 20UL> { unsigned char __elems_[20]; } _digest;
    BOOL _isDeallocating;
}

@property (readonly, nonatomic) long long identifier;
@property (retain, nonatomic) id<TSPDataStorage> storage;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isApplicationData;
@property (readonly, nonatomic) BOOL isExternalData;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) unsigned long long encodedLength;

+ (id)null;
+ (void)addCullingListener:(id)a0;
+ (id)cullingListeners;
+ (id)cullingListenersQueue;
+ (id)dataFromDataRep:(id)a0 filename:(id)a1 context:(id)a2;
+ (id)dataFromNSData:(id)a0 filename:(id)a1 context:(id)a2;
+ (id)dataFromReadChannel:(id)a0 filename:(id)a1 context:(id)a2;
+ (id)dataFromURL:(id)a0 context:(id)a1;
+ (id)dataFromURL:(id)a0 useExternalReferenceIfAllowed:(BOOL)a1 context:(id)a2;
+ (id)dataFromURL:(id)a0 useExternalReferenceIfAllowed:(BOOL)a1 useFileCoordination:(BOOL)a2 context:(id)a3;
+ (id)readOnlyDataFromDataRep:(id)a0 filename:(id)a1 context:(id)a2;
+ (id)readOnlyDataFromNSData:(id)a0 filename:(id)a1 context:(id)a2;
+ (id)readOnlyDataFromURL:(id)a0 context:(id)a1;
+ (id)readOnlyDataWithoutDataDigestFromURL:(id)a0 context:(id)a1;
+ (void)removeCullingListener:(id)a0;
+ (id)requiredAVAssetOptions;
+ (BOOL)updateDigest:(void *)a0 withProtobufString:(const void *)a1;

- (const void *)digest;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)preferredFilename;
- (id)bookmarkData;
- (id)copyWithContext:(id)a0;
- (id)AVAsset;
- (id)NSData;
- (id)AVAssetWithOptions:(id)a0;
- (void)addDownloadObserver:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIdentifier:(long long)a0 digest:(const void *)a1 filename:(id)a2 storage:(id)a3 manager:(id)a4;
- (BOOL)isLengthLikelyToBeGreaterThan:(unsigned long long)a0;
- (BOOL)isStorageInPackage:(id)a0;
- (struct CGDataProvider { } *)newCGDataProvider;
- (struct CGImage { } *)newCGImage;
- (struct CGImageSource { } *)newCGImageSource;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performInputStreamReadWithAccessor:(id /* block */)a0;
- (void)setFilename:(id)a0 storage:(id)a1;
- (void)willCull;

@end
