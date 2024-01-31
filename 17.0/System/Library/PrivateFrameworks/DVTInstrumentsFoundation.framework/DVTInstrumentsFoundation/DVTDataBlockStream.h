@class NSString;

@interface DVTDataBlockStream : NSObject <DVTInputStream, DVTOutputStream> {
    struct list<NSData *, std::allocator<NSData *>> { struct __list_node_base<NSData *, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<NSData *, void *>>> { unsigned long long __value_; } __size_alloc_; } _records;
}

@property (readonly, nonatomic) BOOL supportsPeek;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (BOOL)hasData;
- (void).cxx_destruct;
- (id)createNextStream:(id *)a0;
- (BOOL)hasSpace;
- (id)peek:(unsigned long long)a0 error:(id *)a1;
- (id)read:(unsigned long long)a0 error:(id *)a1;
- (long long)write:(id)a0 error:(id *)a1;

@end
