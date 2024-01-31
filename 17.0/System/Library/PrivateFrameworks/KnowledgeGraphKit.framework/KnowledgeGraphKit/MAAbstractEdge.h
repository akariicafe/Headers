@class MAAbstractNode;

@interface MAAbstractEdge : MAConcreteEdge {
    MAAbstractNode *_sourceAbstractNode;
    MAAbstractNode *_targetAbstractNode;
}

@property (readonly) unsigned long long minimum;
@property (readonly) unsigned long long maximum;
@property (readonly) BOOL isDirected;

- (id)oppositeNode:(id)a0;
- (id)targetNode;
- (void).cxx_destruct;
- (id)sourceNode;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 minimum:(unsigned long long)a5 maximum:(unsigned long long)a6 directed:(BOOL)a7;

@end
