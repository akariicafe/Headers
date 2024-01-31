@class NSString, PXSharedLibraryStatusProvider;

@interface PXLibraryFilterState : PXObservable <PXChangeObserver, PXPreferencesObserver, NSCopying, PXFilterState>

@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (nonatomic) long long viewMode;
@property (nonatomic, getter=isSharedLibraryBadgeEnabled) BOOL sharedLibraryBadgeEnabled;
@property (readonly, nonatomic) unsigned short sharingFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isFiltering;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;

- (void)preferencesDidChange;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)predicateForUseCase:(unsigned long long)a0;
- (BOOL)isLibraryFilterActive:(long long)a0;
- (id)initWithSharedLibraryStatusProvider:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
