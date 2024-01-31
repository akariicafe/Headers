@class NSString, SUUIClientContext, SUUISearchFieldController, UIViewController;

@interface SUUIIPadSearchController : NSObject <SUUISearchFieldDelegate> {
    SUUISearchFieldController *_searchFieldController;
}

@property (class, copy, nonatomic) NSString *lastSearchTerm;

@property (readonly, weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (readonly, nonatomic) SUUISearchFieldController *searchFieldController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_searchFieldController;
- (void)_termDidChangeNotification:(id)a0;
- (id)initWithParentViewController:(id)a0;
- (id)newSearchFieldBarItem;
- (void)reloadSearchField;
- (void)searchFieldController:(id)a0 requestSearch:(id)a1;
- (void)setNumberOfSearchResults:(long long)a0;
- (void)setSearchFieldPlaceholderText:(id)a0;
- (void)setSearchFieldText:(id)a0;

@end
