@protocol TSPComponentParserDelegate;

@interface TSPComponentParser : NSObject {
    id<TSPComponentParserDelegate> _delegate;
    unsigned long long _state;
    unsigned int _archiveInfoLength;
    struct ArchiveInfo { void /* function */ **_vptr$MessageLite; struct InternalMetadata { void *ptr_; } _internal_metadata_; struct HasBits<1UL> { unsigned int has_bits_[1]; } _has_bits_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; struct RepeatedPtrField<TSP::MessageInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } message_infos_; unsigned long long identifier_; BOOL should_merge_; } _archiveInfo;
    unsigned int _messagesLength;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (unsigned long long)readArchiveFromStream:(struct DispatchDataInputStream { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; } *)a0 error:(id *)a1;
- (unsigned long long)readArchiveInfoFromStream:(struct DispatchDataInputStream { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; } *)a0 error:(id *)a1;
- (unsigned long long)readArchiveInfoLengthFromStream:(struct DispatchDataInputStream { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; } *)a0 error:(id *)a1;
- (BOOL)readFromStream:(struct DispatchDataInputStream { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; } *)a0 error:(id *)a1;
- (void)readWithChannel:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;

@end
