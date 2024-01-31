@class cNodeRestriction;

@interface cnodeBuilder : NSObject

@property unsigned int ulType;
@property unsigned int weight;
@property (retain) cNodeRestriction *rootNode;

- (void).cxx_destruct;
- (int)appendRestriction:(id)a0;
- (id)initWithType:(unsigned int)a0 Weight:(unsigned int)a1;

@end
