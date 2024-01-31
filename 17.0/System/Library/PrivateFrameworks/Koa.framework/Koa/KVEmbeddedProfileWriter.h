@class NSOutputStream, NSString, KVDatasetInfo, KVProfileInfo;

@interface KVEmbeddedProfileWriter : NSObject <KVProfileWriter> {
    NSOutputStream *_stream;
    KVProfileInfo *_profileInfo;
    KVDatasetInfo *_datasetInfo;
    struct FlatBufferBuilder { struct vector_downward { struct Allocator *allocator_; BOOL own_allocator_; unsigned long long initial_size_; unsigned long long buffer_minalign_; unsigned long long reserved_; char *buf_; char *cur_; char *scratch_; } buf_; unsigned int num_field_loc; unsigned short max_voffset_; BOOL nested; BOOL finished; unsigned long long minalign_; BOOL force_defaults_; BOOL dedup_vtables_; void *string_pool; } _fbb;
    struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> { void *__begin_; void *__end_; struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> { void *__value_; } __end_cap_; } _datasets;
    struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> { void *__begin_; void *__end_; struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> { void *__value_; } __end_cap_; } _items;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (BOOL)finishDataset:(id *)a0;
- (BOOL)finishProfile:(id *)a0;
- (BOOL)startDataset:(id)a0 error:(id *)a1;
- (BOOL)startProfile:(id)a0 error:(id *)a1;

@end
