@interface GKSupplementaryViewFactory : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) Class reusableViewClass;
@property (readonly, nonatomic) SEL configurator;

+ (id)factoryForClass:(Class)a0 target:(id)a1 configurator:(SEL)a2;
+ (id)factoryForClass:(Class)a0 target:(id)a1 configurator:(SEL)a2 userData:(id)a3;

- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithClass:(Class)a0 target:(id)a1 configurator:(SEL)a2 userData:(id)a3;

@end
