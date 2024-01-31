@class NSArray, NSHashTable;

@interface _UIStatusBarPersistentAnimationView : UIView

@property (retain, nonatomic) NSHashTable *animations;
@property (copy, nonatomic) NSArray *persistentAnimations;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
