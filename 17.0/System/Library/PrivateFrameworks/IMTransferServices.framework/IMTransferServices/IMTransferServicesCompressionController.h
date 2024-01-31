@class NSMutableDictionary;

@interface IMTransferServicesCompressionController : NSObject {
    NSMutableDictionary *_blockMap;
}

+ (id)sharedInstance;

- (void)fileCopierDidFinish:(id)a0;
- (void)fileCopierDidStart:(id)a0;
- (id /* block */)_blockForCopier:(id)a0;
- (void)_mapCopier:(id)a0 toBlock:(id /* block */)a1;
- (void)_unmapCopier:(id)a0;
- (void)compressFileTransfer:(id)a0 completionBlock:(id /* block */)a1;

@end
