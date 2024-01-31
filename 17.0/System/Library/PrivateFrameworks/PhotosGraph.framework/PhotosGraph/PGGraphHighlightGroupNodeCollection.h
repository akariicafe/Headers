@class MARelation, PGGraphHighlightTypeNodeCollection, PGGraphFeatureNodeCollection, PGGraphHighlightNodeCollection;

@interface PGGraphHighlightGroupNodeCollection : PGGraphHighlightNodeCollection

@property (class, readonly) MARelation *featureOfHighlightGroup;
@property (class, readonly) MARelation *locationFeatureOfHighlightGroup;
@property (class, readonly) MARelation *areaFeatureOfHighlightGroup;
@property (class, readonly) MARelation *momentsOfHighlightGroup;

@property (readonly, nonatomic) PGGraphHighlightNodeCollection *highlightNodes;
@property (readonly, nonatomic) PGGraphHighlightTypeNodeCollection *typeNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featuredLocationOrAreaNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *tripFeatureNodes;

+ (Class)nodeClass;
+ (id)highlightGroupNodesForUUIDs:(id)a0 inGraph:(id)a1;

- (id)highlightGroupNodes;
- (id)momentNodes;

@end
