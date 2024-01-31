@class NSMutableArray, NSMutableDictionary, UIView;

@interface SKUIViewReusePool : NSObject {
    UIView *_parentView;
    NSMutableDictionary *_reuseClasses;
    NSMutableArray *_viewPool;
}

- (void).cxx_destruct;
- (id)initWithParentView:(id)a0;
- (void)hideUnusedViews;
- (id)dequeueReusableViewWithReuseIdentifier:(id)a0;
- (void)recycleReusableViews:(id)a0;
- (void)registerClass:(Class)a0 forViewWithReuseIdentifier:(id)a1;
- (Class)viewClassWithReuseIdentifier:(id)a0;

@end
