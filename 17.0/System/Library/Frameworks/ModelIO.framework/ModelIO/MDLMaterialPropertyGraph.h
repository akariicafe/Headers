@class NSArray, NSMutableArray;

@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode {
    NSMutableArray *_finalNodes;
}

@property (readonly, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) NSArray *connections;

- (void).cxx_destruct;
- (void)evaluate;
- (id)initWithNodes:(id)a0 connections:(id)a1;

@end
