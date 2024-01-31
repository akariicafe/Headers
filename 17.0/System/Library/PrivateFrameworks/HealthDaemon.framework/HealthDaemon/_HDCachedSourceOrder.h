@interface _HDCachedSourceOrder : NSObject {
    BOOL _userOrdered;
    BOOL _isDefaultSourceOrder;
    struct vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> { struct _HDWrappedSource *__begin_; struct _HDWrappedSource *__end_; struct __compressed_pair<_HDWrappedSource *, std::allocator<_HDWrappedSource>> { struct _HDWrappedSource *__value_; } __end_cap_; } _orderedSources;
}

- (id)init;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
