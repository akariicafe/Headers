@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEORequestResponseMetadataFileManager : NSObject {
    NSObject<OS_dispatch_queue> *_syncQ;
    NSObject<OS_dispatch_source> *_closeTimer;
    NSString *_fileDirectory;
    NSMutableDictionary *_metadataFiles;
    BOOL _needDir;
}

+ (id)sharedManager;

- (id)init;
- (id)initWithDirectory:(id)a0;
- (void).cxx_destruct;
- (void)_startTimer;
- (void)_clearTimer;
- (void)_closeFiles;
- (BOOL)_createIfNeededRequestResponseMetadataDirectory:(id)a0;
- (id)_filepathFromBatchID:(unsigned long long)a0;
- (void)commoninit;
- (int)fileDescriptorOfRequestResponseMetadataFileForBatchID:(unsigned long long)a0;
- (void)saveRequestResponseMetadata:(id)a0 batchID:(unsigned long long)a1;

@end
