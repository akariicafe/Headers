@interface ML3HomeSharingImportOperation : ML3DAAPImportOperation {
    int _playlistNameOrder;
}

- (void)main;
- (unsigned long long)importSource;
- (BOOL)_performHomeSharingImportWithTransaction:(id)a0;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })containerImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 withTrackIds:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a1 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> { void *x0; void *x1; struct __compressed_pair<std::unordered_set<std::string> *, std::allocator<std::unordered_set<std::string>>> { void *x0; } x2; })a2;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (void)updateImportProgress:(float)a0;

@end
