@interface DYReplayControllerQueue : NSObject {
    struct queue<void (^)(), std::deque<void (^)()>> { struct deque<void (^)(), std::allocator<void (^)()>> { struct __split_buffer<void (^__strong *)(), std::allocator<void (^__strong *)()>> { id /* block */ **__first_; id /* block */ **__begin_; id /* block */ **__end_; struct __compressed_pair<void (^__strong **)(), std::allocator<void (^__strong *)()>> { id /* block */ **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<void (^)()>> { unsigned long long __value_; } __size_; } c; } _blockQueue;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)clear;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dequeBlock;
- (id /* block */)front;
- (void)pushBlock:(id /* block */)a0;

@end
