@class MPMutableSectionedCollection;

@interface MusicKit_SoftLinking_MPMutableSectionedCollection : MusicKit_SoftLinking_MPSectionedCollection {
    MPMutableSectionedCollection *_underlyingSectionedCollection;
}

@property (readonly, nonatomic) MPMutableSectionedCollection *_underlyingSectionedCollection;

- (id)init;
- (void)appendItem:(id)a0;
- (void).cxx_destruct;
- (void)appendItems:(id)a0;
- (void)appendSection:(id)a0;
- (id)initWithUnderlyingSectionedCollection:(id)a0;

@end
