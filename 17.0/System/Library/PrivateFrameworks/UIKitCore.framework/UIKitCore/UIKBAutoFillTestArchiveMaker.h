@class NSString, UIKBAutoFillTestArchive, UIViewController;

@interface UIKBAutoFillTestArchiveMaker : NSObject <NSKeyedArchiverDelegate> {
    UIKBAutoFillTestArchive *_testArchive;
    UIViewController *_viewControllerToSnapshot;
    long long _currentTableViewTag;
    long long _currentTextFieldTag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archiveMakerWithViewControllerToSnapshot:(id)a0;

- (void).cxx_destruct;
- (id)archiver:(id)a0 willEncodeObject:(id)a1;
- (id)_cloneTextView:(id)a0;
- (void)_applyPropertiesFromLabel:(id)a0 toLabel:(id)a1;
- (void)_applyPropertiesFromView:(id)a0 toView:(id)a1;
- (id)_cloneBarButtonItem:(id)a0;
- (id)_cloneButton:(id)a0;
- (id)_cloneGenericView:(id)a0;
- (id)_cloneLabel:(id)a0;
- (id)_cloneNavigationItem:(id)a0;
- (id)_cloneTableView:(id)a0;
- (id)_cloneTextField:(id)a0;
- (id)_cloneView:(id)a0;
- (id)_cloneViewHierarchyFromRootView:(id)a0;
- (id)_makeCopyOfObject:(id)a0;
- (id)initWithViewControllerToSnapshot:(id)a0;
- (id)makeArchive;

@end
