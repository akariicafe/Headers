@class MPModelPodcastEpisodeKind;

@interface MPModelPodcastKind : MPModelKind

@property (readonly, nonatomic) MPModelPodcastEpisodeKind *episodeKind;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithEpisodeKind:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)humanDescription;
- (void).cxx_destruct;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
