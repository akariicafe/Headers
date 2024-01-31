@class NSString;

@interface PGGraphMusicAlbumNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *title;

- (id)initWithTitle:(id)a0;
- (id)label;
- (id)propertyDictionary;
- (id)description;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;

@end
