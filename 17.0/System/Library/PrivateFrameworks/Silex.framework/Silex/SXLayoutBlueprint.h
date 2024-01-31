@class SXLayoutOptions, NSMutableDictionary, SXComponentDependencyResolver, NSMutableSet, NSMutableArray, NSOrderedSet;
@protocol SXComponentBlueprintFactory, SXUnitConverterFactory;

@interface SXLayoutBlueprint : NSObject <NSCopying>

@property (readonly, nonatomic) id<SXComponentBlueprintFactory> componentBlueprintFactory;
@property (readonly, nonatomic) id<SXUnitConverterFactory> unitConverterFactory;
@property (retain, nonatomic) NSMutableDictionary *blueprint;
@property (retain, nonatomic) NSMutableDictionary *flattenedBlueprint;
@property (retain, nonatomic) NSMutableArray *orderedComponentIdentifiers;
@property (nonatomic, getter=isUpdating) BOOL updating;
@property (retain, nonatomic) NSMutableSet *invalidatedComponents;
@property (retain, nonatomic) SXComponentDependencyResolver *dependencySolver;
@property (weak, nonatomic) SXLayoutBlueprint *parentLayoutBlueprint;
@property (nonatomic) struct CGSize { double width; double height; } blueprintSize;
@property (retain, nonatomic) NSOrderedSet *snapLines;
@property (readonly, nonatomic) SXLayoutBlueprint *rootLayoutBlueprint;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) SXLayoutOptions *layoutOptions;

- (void)endUpdates;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)componentIdentifiers;
- (id)componentBlueprintForComponentIdentifier:(id)a0 includeChildren:(BOOL)a1;
- (void)invalidateState:(id)a0 forComponentWithIdentifier:(id)a1;
- (id)componentBlueprintForComponentIdentifier:(id)a0;
- (id)componentsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)containerComponentIdentifierContainingComponentWithIdentifier:(id)a0;
- (id)initWithLayoutOptions:(id)a0 componentBlueprintFactory:(id)a1 unitConverterFactory:(id)a2;
- (void)invalidateBlueprint;
- (void)invalidateBlueprintPosition;
- (void)invalidateDependentsOfComponentNode:(id)a0 forDependencyResolver:(id)a1;
- (void)invalidateDependentsOfInvalidatedComponents;
- (void)invalidatePositionForComponentWithIdentifier:(id)a0;
- (void)invalidateSizeForComponentWithIdentifier:(id)a0;
- (void)invalidateSizeForComponentWithIdentifier:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1;
- (id)layoutDescriptionForBlueprint:(id)a0 depth:(unsigned long long)a1;
- (void)registerLayout:(id)a0 sizer:(id)a1 forComponent:(id)a2;
- (void)registerLayout:(id)a0 sizer:(id)a1 forComponent:(id)a2 atIndex:(unsigned long long)a3;
- (id)snapLinesIncludingChildren:(BOOL)a0;
- (void)startUpdatesForWidth:(double)a0;
- (void)storeComponentsFromBlueprint:(id)a0 inDictionary:(id)a1;
- (void)unregisterLayout:(id)a0;
- (void)updatePosition:(struct CGPoint { double x0; double x1; })a0 forComponentWithIdentifier:(id)a1;
- (void)updateSize:(struct CGSize { double x0; double x1; })a0 forComponentWithIdentifier:(id)a1;

@end
