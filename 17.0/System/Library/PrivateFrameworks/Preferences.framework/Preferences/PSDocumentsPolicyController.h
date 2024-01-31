@class NSString, PSSpecifier, DOCSourceSearchingContext, DOCDocumentSource;

@interface PSDocumentsPolicyController : PSListController

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) DOCDocumentSource *selectedDocumentSource;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) DOCSourceSearchingContext *searchingContext;
@property (nonatomic) BOOL isFirstSourceResults;

- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (id)documentSource;
- (void)setDocumentSource:(id)a0;
- (void)updateFooterAnimated:(BOOL)a0;
- (void)updateRadioGroupWithSources:(id)a0 animated:(BOOL)a1;

@end
