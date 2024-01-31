@class NSArray, NSMutableDictionary, NSMutableArray;

@interface _UICollectionLayoutDynamicsConfiguration : NSObject {
    NSMutableArray *_dirtyItems;
    NSArray *_items;
}

@property (retain, nonatomic) NSMutableDictionary *behaviorDict;
@property (retain, nonatomic) NSArray *dynamicItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousVisibleBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentVisibleBounds;

- (id)init;
- (void)_reset;
- (void).cxx_destruct;
- (id)_dirtyItems;
- (void)_setBehaviors:(id)a0 forItem:(id)a1;
- (id)behaviorsForItem:(id)a0;
- (void)setBehaviors:(id)a0 forItem:(id)a1;

@end
