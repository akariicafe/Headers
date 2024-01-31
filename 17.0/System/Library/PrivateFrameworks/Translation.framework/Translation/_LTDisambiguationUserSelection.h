@class NSString, _LTDirectedEdge;

@interface _LTDisambiguationUserSelection : NSObject <NSCopying>

@property (readonly, copy, nonatomic) _LTDirectedEdge *edge;
@property (readonly, copy, nonatomic) NSString *sourceSnippet;
@property (readonly, nonatomic) unsigned long long linkIndex;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEdge:(id)a0 sourceSnippet:(id)a1 linkIndex:(unsigned long long)a2;

@end
