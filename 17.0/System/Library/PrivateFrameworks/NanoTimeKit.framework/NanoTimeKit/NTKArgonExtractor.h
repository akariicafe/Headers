@class NSMapTable, NTKArgonExtractorOperation, NSMutableOrderedSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NTKArgonExtractor : NSObject <NTKArgonExtractorProviding> {
    NSString *_inProgressPath;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NTKArgonExtractorOperation *performingOperation;
@property (readonly, nonatomic) NSMutableOrderedSet *queuedKeyDescriptorOperations;
@property (readonly, nonatomic) NSMapTable *extractionCallbacksByDescriptor;
@property (readonly, nonatomic) NSMapTable *removalCallbacksByDescriptor;
@property (readonly, nonatomic) NSString *extractionPath;
@property (readonly, nonatomic) NSString *sourcePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_createUnprotectedDirectoryAtPath:(id)a0 error:(id *)a1;

- (void)_queue_removeKeyDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)initWithSourcePath:(id)a0 inProgressPath:(id)a1 extractionPath:(id)a2;
- (void)_queue_extractUsingKeyDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)extractUsingKeyDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)_queue_removeKeyDescriptor:(id)a0;
- (void).cxx_destruct;
- (void)_queue_extractKeyDescriptor:(id)a0;
- (void)removeExtractedKeyDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)_queue_performNextOperationIfNeeded;

@end
