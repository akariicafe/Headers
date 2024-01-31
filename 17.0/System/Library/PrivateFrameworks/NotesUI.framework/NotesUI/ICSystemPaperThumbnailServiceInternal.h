@interface ICSystemPaperThumbnailServiceInternal : NSObject {
    void /* unknown type, empty encoding */ fileManager;
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contextDidUpdateObject;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cacheDidInvalidateObject;
    void /* unknown type, empty encoding */ $__lazy_storage_$_didUpdateSystemPaperNotes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contextDidDeleteObject;
    void /* unknown type, empty encoding */ $__lazy_storage_$_didDeleteSystemPaperNotes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accessibilityAppearanceDidChange;
}

@property (class, nonatomic, readonly) ICSystemPaperThumbnailServiceInternal *sharedService;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ thumbnailService;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)cancel;
- (void)observe;
- (void)invalidateForNote:(id)a0;
- (void)invalidateForNoteIDs:(id)a0;
- (void)invalidateForNotes:(id)a0;
- (void)updateIfNeededForNote:(id)a0 completion:(id /* block */)a1;
- (void)updateIfNeededForNoteIDs:(id)a0 completion:(id /* block */)a1;
- (void)updateIfNeededForNotes:(id)a0 completion:(id /* block */)a1;
- (void)updateIfNeededWithCompletion:(id /* block */)a0;
- (void)updateRecentSystemPaperNote;

@end
