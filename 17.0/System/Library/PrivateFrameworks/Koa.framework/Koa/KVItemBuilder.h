@class NSString;

@interface KVItemBuilder : NSObject {
    struct FlatBufferBuilder { struct vector_downward { struct Allocator *allocator_; BOOL own_allocator_; unsigned long long initial_size_; unsigned long long buffer_minalign_; unsigned long long reserved_; char *buf_; char *cur_; char *scratch_; } buf_; unsigned int num_field_loc; unsigned short max_voffset_; BOOL nested; BOOL finished; unsigned long long minalign_; BOOL force_defaults_; BOOL dedup_vtables_; void *string_pool; } _fbb;
    struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> { void *__begin_; void *__end_; struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> { void *__value_; } __end_cap_; } _fields;
    long long _itemType;
    NSString *_itemId;
}

+ (void)initialize;
+ (id)buildFieldWithType:(long long)a0 label:(id)a1 value:(id)a2 error:(id *)a3;

- (id)init;
- (void)_reset;
- (id)buildBufferWithError:(id *)a0;
- (id)addFieldWithType:(long long)a0 label:(id)a1 value:(id)a2 error:(id *)a3;
- (id).cxx_construct;
- (id)setItemType:(long long)a0 itemId:(id)a1 error:(id *)a2;
- (id)addFieldWithType:(long long)a0 value:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)addFieldWithType:(long long)a0 localeType:(long long)a1 label:(id)a2 value:(id)a3 error:(id *)a4;
- (id)buildItemWithError:(id *)a0;
- (id)addFieldWithType:(long long)a0 localeType:(long long)a1 value:(id)a2 error:(id *)a3;
- (id)_addFieldWithType:(long long)a0 localeType:(long long)a1 label:(id)a2 value:(id)a3 error:(id *)a4;

@end
