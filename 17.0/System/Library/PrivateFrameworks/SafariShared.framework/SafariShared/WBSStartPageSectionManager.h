@class NSArray, NSObject;
@protocol WBSStartPageSectionManagerStorage;

@interface WBSStartPageSectionManager : NSObject {
    NSObject<WBSStartPageSectionManagerStorage> *_storage;
    NSArray *_cachedSections;
    long long _ignoreChanges;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) WBSStartPageSectionManager *defaultManager;
@property (class, readonly, copy, nonatomic) NSArray *allSections;

@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *enabledSectionIdentifiers;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, copy, nonatomic) NSArray *cloudKitStartPageSectionOrder;

- (void)invalidateCache;
- (id)init;
- (void)dealloc;
- (id)initWithStorage:(id)a0;
- (void)setSectionsIdentifiers:(id)a0 enabledIndexes:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)saveSections:(id)a0 andUpdateInMemoryCache:(BOOL)a1;
- (id)sectionForIdentifier:(id)a0;
- (void)resetToDefault;
- (void)setSectionIdentifier:(id)a0 enabled:(BOOL)a1;

@end
