@interface VNModelFilesCache : NSObject {
    struct unique_ptr<cvml::util::model_file_cache, std::default_delete<cvml::util::model_file_cache>> { struct __compressed_pair<cvml::util::model_file_cache *, std::default_delete<cvml::util::model_file_cache>> { struct model_file_cache *__value_; } __ptr_; } m_impl;
}

+ (id)sharedInstance;
+ (BOOL)useFOpenForModelWithPath:(id)a0;

- (id)load:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)purgeAll;
- (void)unload:(id)a0;

@end
