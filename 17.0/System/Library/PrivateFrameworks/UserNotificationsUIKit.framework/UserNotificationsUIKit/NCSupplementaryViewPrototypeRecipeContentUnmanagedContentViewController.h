@class NSString;

@interface NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewController : NCSupplementaryViewPrototypeRecipeViewController <NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)title;

- (id)init;
- (void)loadView;
- (void)unmanagedContentViewControllerView:(id)a0 setContainsUnmanagedContent:(BOOL)a1;

@end
