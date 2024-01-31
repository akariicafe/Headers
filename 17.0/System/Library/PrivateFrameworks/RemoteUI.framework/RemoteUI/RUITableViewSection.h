@class RUIElement, RUIDetailHeaderElement, NSArray, RUISubHeaderElement, UIView, RUITableView, RUITableViewRow, RUITableViewHeaderFooterView, RUIMultiChoiceElement, NSMutableArray, NSNumber;
@protocol RemoteUITableFooter, RUIHeader;

@interface RUITableViewSection : RUIElement <RUIHeaderDelegate, RUITableFooterDelegate, NSCopying> {
    NSMutableArray *_rows;
    long long _disclosureLimit;
    NSNumber *_drawsTopSeparator;
}

@property (readonly, nonatomic) NSArray *rows;
@property (retain, nonatomic) UIView<RUIHeader> *headerView;
@property (retain, nonatomic) RUITableViewHeaderFooterView *containerizedHeaderView;
@property (retain, nonatomic) UIView<RemoteUITableFooter> *footerView;
@property (retain, nonatomic) RUITableViewHeaderFooterView *containerizedFooterView;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) BOOL drawTopSeparator;
@property (retain, nonatomic) RUITableViewRow *showAllRow;
@property (retain, nonatomic) RUIElement *header;
@property (retain, nonatomic) RUISubHeaderElement *subHeader;
@property (retain, nonatomic) RUIDetailHeaderElement *detailHeader;
@property (retain, nonatomic) RUIElement *footer;
@property (retain, nonatomic) RUIMultiChoiceElement *multiChoiceElement;
@property (weak, nonatomic) RUITableView *tableElement;
@property (nonatomic) BOOL configured;

- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setAttributes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setImageAlignment:(int)a0;
- (void)addRow:(id)a0;
- (void)insertRow:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeRowAtIndex:(unsigned long long)a0;
- (void)populatePostbackDictionary:(id)a0;
- (id)viewForElementIdentifier:(id)a0;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (BOOL)hasCustomHeader;
- (id)staticFunctions;
- (BOOL)hasCustomFooter;
- (Class)_customFooterClass;
- (Class)_customHeaderClass;
- (id)colorFromAttributeString:(id)a0;
- (void)footerView:(id)a0 activatedLinkWithURL:(id)a1;
- (BOOL)hasValueForDrawsTopSeparator;
- (void)headerView:(id)a0 activatedLinkWithURL:(id)a1;
- (void)headerViewDidChange:(id)a0;
- (id)staticValues;
- (id)subElementWithID:(id)a0;
- (id)subElementsWithName:(id)a0;
- (void)tappedShowAllRowWithTable:(id)a0;

@end
