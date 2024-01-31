@class NSArray, NSSet, NSDate;

@interface PGGraphMusicSessionNode : PGGraphOptimizedNode

@property (class, readonly, nonatomic) NSArray *musicSessionDateSortDescriptors;

@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSSet *trackNodes;

+ (id)momentOfMusicSession;

- (id)label;
- (id)propertyDictionary;
- (id)description;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (id)momentNodes;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (void)enumerateMusicTrackNodesUsingBlock:(id /* block */)a0;
- (id)initWithLocalStartDate:(id)a0 localEndDate:(id)a1;

@end
