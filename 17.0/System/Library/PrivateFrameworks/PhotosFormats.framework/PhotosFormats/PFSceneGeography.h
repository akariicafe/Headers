@class NSString;

@interface PFSceneGeography : PFCachingArchiveIndex <PFCachingArchiveIndex> {
    NSString *_dataArchivePath;
    struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { struct __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { void *__value_; } __ptr_; } _backingFile;
    const void *_floatMap;
    const void *_scenes;
    const void *_poi;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)indexFileVersion;
- (const char *)indexLabel;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser *x0; } x0; })archiveLineParserForIndexPath:(id)a0;
- (id).cxx_construct;
- (id)indexName;
- (void).cxx_destruct;
- (BOOL)loadIndexFile:(const char *)a0 fileSize:(long long)a1;
- (BOOL)loadOrCreateIndex;
- (BOOL)indexSupported;
- (id)dataArchivePath;
- (struct c_iterator<boost::unordered::detail::node<boost::interprocess::allocator<pf::SceneGeographyNode, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>, std::pair<const boost::container::basic_string<char, std::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>>, pf::SceneGeographyNode>>> { struct offset_ptr<boost::unordered::detail::node<boost::interprocess::allocator<pf::SceneGeographyNode, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>, std::pair<const boost::container::basic_string<char, std::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>>, pf::SceneGeographyNode>>, long, unsigned long, 0UL> { union offset_ptr_internal<unsigned long, 0UL> { unsigned long long x0; union aligned_struct_wrapper<8UL, 1UL> { struct aligned_struct<8UL, 1UL> { unsigned char x0[8]; } x0; unsigned char x1[8]; } x1; } x0; } x0; })findPOIHash:(id)a0;
- (double)popularityForPOI:(id)a0 popularity:(unsigned short)a1;
- (id)scenesByScoreForPOIHash:(id)a0;
- (double)scoreForPOI:(id)a0 scenes:(id)a1 maxScenesCount:(long long)a2 popularityWeight:(double)a3;

@end
