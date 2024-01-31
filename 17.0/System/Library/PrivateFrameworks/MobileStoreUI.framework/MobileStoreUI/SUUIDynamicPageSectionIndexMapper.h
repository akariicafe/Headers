@protocol SUUIEntityProviding;

@interface SUUIDynamicPageSectionIndexMapper : NSObject {
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_sectionIndexToEntityRange;
    long long _numberOfSections;
    struct { unsigned char respondsToNumberOfSections : 1; } _entityProviderFlags;
}

@property (retain, nonatomic) id<SUUIEntityProviding> entityProvider;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) long long totalNumberOfEntities;

- (void)dealloc;
- (void)reloadData;
- (void).cxx_destruct;
- (BOOL)getItem:(unsigned long long *)a0 section:(unsigned long long *)a1 forGlobalIndex:(long long)a2;
- (void)_loadDataIfNeeded;
- (id)entityIndexPathForGlobalIndex:(long long)a0;
- (long long)globalIndexForEntityIndexPath:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSectionAtIndex:(long long)a0;

@end
