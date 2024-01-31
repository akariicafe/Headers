@class PXSharedLibraryStatusProvider;
@protocol PXStoryLayoutSpec;

@interface PXStoryLayoutSpecManager : PXFeatureSpecManager {
    PXSharedLibraryStatusProvider *_sharedLibraryStatusProvider;
}

@property (readonly, nonatomic) unsigned long long storyConfigurationOptions;
@property (readonly, nonatomic) id<PXStoryLayoutSpec> layoutSpec;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (Class)specClass;
- (id)createSpec;
- (void)_observeSharedLibraryStatusIfNeeded;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 storyConfigurationOptions:(unsigned long long)a2;

@end
