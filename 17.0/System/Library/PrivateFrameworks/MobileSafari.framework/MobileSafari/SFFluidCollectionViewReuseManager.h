@class NSMutableDictionary, UIView;

@interface SFFluidCollectionViewReuseManager : NSObject {
    NSMutableDictionary *_registrations;
}

@property (readonly, weak, nonatomic) UIView *containerView;

- (id)initWithContainerView:(id)a0;
- (void).cxx_destruct;
- (void)enqueueView:(id)a0;
- (id)dequeueViewWithReuseIdentifier:(id)a0 elementCategory:(long long)a1 elementKind:(id)a2 forIndexPath:(id)a3;
- (void)registerReuseIdentifier:(id)a0 elementCategory:(long long)a1 elementKind:(id)a2 viewCreationBlock:(id /* block */)a3;

@end
