@class SFColor, NSString;

@interface SearchUI.SearchUIArchivedRowModel : SearchUICardSectionRowModel {
    void /* unknown type, empty encoding */ swiftUIView;
}

@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) BOOL fillsBackgroundWithContent;
@property (nonatomic, readonly) NSString *accessibilityIdentifier;

- (id)init;
- (BOOL)hasView;
- (id)initWithResults:(id)a0 itemIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithCardSection:(id)a0 queryId:(unsigned long long)a1 itemIdentifier:(id)a2;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (id)initWithResult:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2 itemIdentifier:(id)a3;
- (id)initWithResult:(id)a0 itemIdentifier:(id)a1;

@end
