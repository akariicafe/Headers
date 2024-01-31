@interface KGNodeFilter : KGElementFilter

@property (class, readonly, nonatomic) KGNodeFilter *any;

@property (nonatomic) BOOL whereNoInAndOutEdges;
@property (nonatomic) BOOL whereNoOutEdges;
@property (nonatomic) BOOL whereNoInEdges;

- (BOOL)matchesNode:(id)a0;

@end
