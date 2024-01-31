@class NSError;

@interface ML3DAAPImportOperation : ML3ImportOperation {
    void *_importSession;
    NSError *_importError;
    struct shared_ptr<DAAPParserDelegate> { struct DAAPParserDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } _delegate;
    unsigned char _updateType;
    long long _totalTrackCount;
    long long _totalContainerCount;
    long long _totalAlbumCount;
    long long _totalArtistCount;
    long long _processedTrackCount;
    long long _processedContainerCount;
    long long _processedArtistCount;
    long long _processedAlbumCount;
    BOOL _importSessionStarted;
    int _sourceType;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })albumImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (int)_getTrackSource;
- (void)_finishParsingWithError:(id)a0;
- (BOOL)_importDAAPPayloadFromFile:(id)a0 entityType:(int)a1;
- (BOOL)_importDAAPPayloadFromFile:(id)a0 shouldProcessPlaylists:(BOOL)a1;
- (BOOL)_preprocessDAAPPayloadFromFile:(id)a0 entityType:(int)a1;
- (BOOL)_processAlbumArtistFromArtistElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_processAlbumCount:(int)a0;
- (BOOL)_processAlbumFromAlbumElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_processAlbumFromTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 importItem:(struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })a1 albumArtistPersistentID:(long long)a2;
- (BOOL)_processArtistCount:(int)a0;
- (BOOL)_processArtistFromTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 importItem:(struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })a1 albumArtistPersistentID:(long long *)a2;
- (BOOL)_processContainerElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 withTrackIds:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a1 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> { void *x0; void *x1; struct __compressed_pair<std::unordered_set<std::string> *, std::allocator<std::unordered_set<std::string>>> { void *x0; } x2; })a2;
- (BOOL)_processContainerItemCount:(int)a0;
- (BOOL)_processDeletedAlbumId:(const void *)a0;
- (BOOL)_processDeletedArtistId:(const void *)a0;
- (BOOL)_processDeletedContainerId:(long long)a0;
- (BOOL)_processDeletedTrackId:(long long)a0;
- (BOOL)_processPersonElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_processTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_processTrackImportItem:(struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_processTrackItemCount:(int)a0;
- (BOOL)_processUpdateType:(unsigned char)a0;
- (BOOL)_startImportSessionIfNeeded;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })_trackImportItemWithTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })albumArtistImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ML3DAAPDeleteImportItem> { struct ML3DAAPDeleteImportItem *x0; struct __shared_weak_count *x1; })albumArtistItemFromDeletedDAAPArtistEntity:(const void *)a0;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })albumImportItemFromDAAPTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ML3DAAPDeleteImportItem> { struct ML3DAAPDeleteImportItem *x0; struct __shared_weak_count *x1; })albumItemFromDeletedDAAPAlbumEntity:(const void *)a0;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })artistImportItemFromDAAPTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 artistEntityType:(long long)a1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })containerImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 withTrackIds:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a1 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> { void *x0; void *x1; struct __compressed_pair<std::unordered_set<std::string> *, std::allocator<std::unordered_set<std::string>>> { void *x0; } x2; })a2;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)performImportOfSourceType:(int)a0 usingConnection:(id)a1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })personImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (void)updateImportProgress:(float)a0;

@end
