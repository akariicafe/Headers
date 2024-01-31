@class NSArray, NSSet, NSString;

@interface PGGraphMusicTrackNode : PGGraphOptimizedNode

@property (class, readonly, nonatomic) NSArray *musicTrackTitleSortDescriptors;

@property (readonly, nonatomic) NSSet *albumNodes;
@property (readonly, nonatomic) NSSet *genreNodes;
@property (readonly, nonatomic) NSSet *artistNodes;
@property (readonly) double durationInSeconds;
@property (readonly, nonatomic) NSString *title;

- (id)label;
- (id)propertyDictionary;
- (id)description;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (void)enumerateArtistNodesUsingBlock:(id /* block */)a0;
- (void)enumerateAlbumNodesUsingBlock:(id /* block */)a0;
- (void)enumerateGenreNodesUsingBlock:(id /* block */)a0;
- (id)initWithTitle:(id)a0 durationInSeconds:(double)a1;

@end
