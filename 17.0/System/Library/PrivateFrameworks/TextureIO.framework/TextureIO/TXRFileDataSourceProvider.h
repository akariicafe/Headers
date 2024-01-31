@class NSString, TXRTextureInfo, NSObject;
@protocol TXRParser, TXRBufferAllocator, OS_dispatch_semaphore, OS_dispatch_queue;

@interface TXRFileDataSourceProvider : NSObject <TXRDataSourceProvider> {
    id<TXRBufferAllocator> _bufferAllocator;
    NSObject<OS_dispatch_queue> *_fileIOQueue;
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    id<TXRParser> _parser;
    TXRTextureInfo *_textureInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_determineFileType:(id)a0;
- (void).cxx_destruct;
- (id)provideImageInfoAtLevel:(unsigned long long)a0 element:(unsigned long long)a1 face:(unsigned long long)a2;
- (id)provideTextureInfo;
- (void)_parseData:(id)a0 bufferAllocator:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithData:(id)a0 bufferAllocator:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 bufferAllocator:(id)a1 options:(id)a2 error:(id *)a3;

@end
