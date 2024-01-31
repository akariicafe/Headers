@class TSPMemoryComponentWriteChannel, NSString, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data;

@interface TSPObjectSerializationEncoder : NSObject <TSPEncoder> {
    NSError *_error;
    BOOL _isFinished;
    NSObject<OS_dispatch_queue> *_accessQueue;
    struct ObjectSerializationDirectory { void /* function */ **_vptr$MessageLite; struct InternalMetadata { void *ptr_; } _internal_metadata_; struct RepeatedPtrField<TSP::ObjectSerializationDirectory_Entry> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } entries_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; } _directory;
    TSPMemoryComponentWriteChannel *_metadataWriteChannel;
    TSPMemoryComponentWriteChannel *_rootComponentWriteChannel;
    NSObject<OS_dispatch_data> *_encodedData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendData:(id)a0 completion:(id /* block */)a1;
- (void)finishEncodingWithCompletion:(id /* block */)a0;
- (id)newMetadataComponentWriteChannel;
- (id)newRootObjectComponentWriteChannel;

@end
