@interface CKXSchema : NSObject <NSCopying> {
    struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } structTokens;
    struct vector<CKXStructProperties, std::allocator<CKXStructProperties>> { struct *__begin_; struct *__end_; struct __compressed_pair<CKXStructProperties *, std::allocator<CKXStructProperties>> { struct *__value_; } __end_cap_; } structTokenToStructProperties;
    struct vector<std::vector<unsigned long long>, std::allocator<std::vector<unsigned long long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<unsigned long long> *, std::allocator<std::vector<unsigned long long>>> { void *__value_; } __end_cap_; } structTokenToFieldTokens;
    struct vector<CKXFieldProperties, std::allocator<CKXFieldProperties>> { struct *__begin_; struct *__end_; struct __compressed_pair<CKXFieldProperties *, std::allocator<CKXFieldProperties>> { struct *__value_; } __end_cap_; } fieldTokenToFieldProperties;
}

@property (nonatomic) unsigned long long nextIdentifier;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)defineFieldForStruct:(unsigned long long)a0;
- (long long)newIdentifier;

@end
