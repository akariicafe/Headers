@class NSString, SKUIViewElement;
@protocol SKUIIndexBarEntryListControllerDelegate;

@interface SKUIIndexBarEntryListController : NSObject

@property (weak, nonatomic) id<SKUIIndexBarEntryListControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL needsRootTargetViewElement;
@property (readonly, nonatomic) BOOL hidesIndexBar;
@property (readonly, nonatomic) NSString *rootTargetIndexBarEntryID;
@property (retain, nonatomic) SKUIViewElement *rootTargetViewElement;
@property (readonly, nonatomic) long long numberOfEntryDescriptors;

+ (id)entryListControllerForEntryListViewElement:(id)a0;
+ (id)entryListControllerForEntryViewElement:(id)a0;

- (void).cxx_destruct;
- (void)_didInvalidate;
- (id)entryDescriptorAtIndex:(long long)a0;
- (void)reloadViewElementData;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)a0 returningRelativeSectionIndex:(out long long *)a1;

@end
