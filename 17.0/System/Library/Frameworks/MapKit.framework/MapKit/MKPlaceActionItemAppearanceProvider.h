@protocol MKPlaceActionItemAppearanceDataProvider;

@interface MKPlaceActionItemAppearanceProvider : NSObject {
    unsigned long long _actionType;
    id<MKPlaceActionItemAppearanceDataProvider> _dataProvider;
}

- (void).cxx_destruct;
- (id)_compactTitle;
- (BOOL)_isDestructiveForMenu;
- (BOOL)_isDestructiveForTableCell;
- (id)_longTitle;
- (id)_menuSymbol;
- (id)_tableCellSymbol;
- (id)bestSymbolNameForDisplayStyle:(unsigned long long)a0;
- (id)bestTitleForDisplayStyle:(unsigned long long)a0;
- (id)initWithActionType:(unsigned long long)a0 dataProvider:(id)a1;
- (BOOL)isDestructiveForDisplayStyle:(unsigned long long)a0;

@end
