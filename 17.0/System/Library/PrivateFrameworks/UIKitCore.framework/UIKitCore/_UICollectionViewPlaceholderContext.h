@class NSUUID, _UIDropAnimationHandlers, UIDragItem, NSString, NSIndexPath;
@protocol _UICollectionViewPlaceholderContextDelegate;

@interface _UICollectionViewPlaceholderContext : NSObject <UICollectionViewPlaceholderContext, _UICollectionViewDropPlaceholderContext>

@property (weak, nonatomic) id<_UICollectionViewPlaceholderContextDelegate> delegate;
@property (retain, nonatomic) UIDragItem *dragItem;
@property (retain, nonatomic) _UIDropAnimationHandlers *animationHandlers;
@property (retain, nonatomic) NSUUID *shadowUpdateIdentifier;
@property (retain, nonatomic) NSString *reuseIdentifier;
@property (retain, nonatomic) NSIndexPath *originalInsertionIndexPath;
@property (copy, nonatomic) id /* block */ cellUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCompletion:(id /* block */)a0;
- (void)addAnimations:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)commitInsertionWithDataSourceUpdates:(id /* block */)a0;
- (BOOL)deletePlaceholder;
- (id)initWithOriginalInsertionIndexPath:(id)a0 dragItem:(id)a1 reuseIdentifier:(id)a2 delegate:(id)a3 cellUpdateHandler:(id /* block */)a4;
- (void)setNeedsCellUpdate;

@end
