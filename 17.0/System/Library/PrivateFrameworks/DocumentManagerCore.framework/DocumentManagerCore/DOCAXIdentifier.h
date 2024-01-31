@class NSString;

@interface DOCAXIdentifier : NSObject

@property (class, readonly) NSString *itemInfoNavigationRoot;
@property (class, readonly) Class itemInfoView;
@property (class, readonly) NSString *tagEditorContainer;
@property (class, readonly) Class sidebar;
@property (class, readonly) Class viewStyleSelector;
@property (class, readonly) Class navBarButton;
@property (class, readonly) NSString *fullNavBar;
@property (class, readonly) NSString *browsingModeTabBar;
@property (class, readonly) NSString *browsingRoot;
@property (class, readonly) NSString *itemCollectionView;
@property (class, readonly) NSString *inlineRenameField;

+ (id)browsingRootIdentifierForSourceIdentifier:(id)a0;
+ (id)groupByMenuButtonForGrouping:(id)a0;
+ (id)idBase;
+ (id)itemCollectionMenuButtonShowing:(id)a0;
+ (id)searchMenuButtonShowing:(id)a0;
+ (id)sortByHeaderButtonForSortIdentifier:(id)a0 ascending:(BOOL)a1 active:(BOOL)a2;
+ (id)sortByMenuButtonForSortIdentifier:(id)a0 ascending:(BOOL)a1 active:(BOOL)a2;

@end
