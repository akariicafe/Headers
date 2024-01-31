@class NSString, PGGraphEdge, NSMutableSet, PGGraphNode;

@interface PGLocationTitleComponent : NSObject

@property (retain, nonatomic) PGGraphNode *node;
@property (retain, nonatomic) PGGraphEdge *edge;
@property (retain, nonatomic) NSMutableSet *addressNodes;
@property (nonatomic) unsigned long long type;
@property (nonatomic) NSString *personName;
@property (readonly, nonatomic) double timestampStart;
@property (readonly, nonatomic) double weight;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addAddressNode:(id)a0;
- (BOOL)canMergeWithTitleComponent:(id)a0;
- (void)updateWithMomentNodes:(id)a0;

@end
