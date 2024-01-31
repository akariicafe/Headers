@class PGGraphMomentNodeCollection;

@interface PGGraphPartOfWeekNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

+ (Class)nodeClass;

@end
