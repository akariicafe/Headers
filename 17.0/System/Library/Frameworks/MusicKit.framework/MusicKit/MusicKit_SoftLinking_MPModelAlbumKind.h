@interface MusicKit_SoftLinking_MPModelAlbumKind : MusicKit_SoftLinking_MPModelKind

@property (readonly, nonatomic) unsigned long long variants;
@property (readonly, nonatomic) unsigned long long options;

- (id)initWithVariants:(unsigned long long)a0 options:(unsigned long long)a1;
- (unsigned long long)_underlyingOptionsFromOptions:(unsigned long long)a0;
- (unsigned long long)_underlyingVariantsFromVariants:(unsigned long long)a0;

@end
