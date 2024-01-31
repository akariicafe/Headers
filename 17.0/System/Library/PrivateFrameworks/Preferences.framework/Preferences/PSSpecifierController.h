@class PSSpecifier, NSMutableArray, UIViewController;
@protocol PSSpecifierControllerDelegate;

@interface PSSpecifierController : NSObject

@property (retain, nonatomic) NSMutableArray *specifiers;
@property (retain, nonatomic) NSMutableArray *bundleControllers;
@property (retain, nonatomic) NSMutableArray *groups;
@property (weak, nonatomic) UIViewController<PSSpecifierControllerDelegate> *viewController;
@property (retain, nonatomic) PSSpecifier *specifier;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (long long)numberOfRowsInSection:(long long)a0;
- (void)reloadSpecifiers;
- (id)specifierForID:(id)a0;
- (long long)indexOfGroup:(long long)a0;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (id)_createGroupIndices:(id)a0;
- (BOOL)_getGroup:(long long *)a0 row:(long long *)a1 ofSpecifierAtIndex:(long long)a2 groups:(id)a3;
- (void)createGroupIndices;
- (BOOL)getGroup:(long long *)a0 row:(long long *)a1 ofSpecifier:(id)a2;
- (BOOL)getGroup:(long long *)a0 row:(long long *)a1 ofSpecifierAtIndex:(long long)a2;
- (BOOL)getGroup:(long long *)a0 row:(long long *)a1 ofSpecifierID:(id)a2;
- (long long)indexForIndexPath:(id)a0;
- (id)loadSpecifiers;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1 bundle:(id)a2;
- (void)prepareSpecifiersMetadata;
- (id)specifierAtIndex:(long long)a0;
- (id)specifierAtIndexPath:(id)a0;

@end
