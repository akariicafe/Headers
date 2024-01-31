@class NSMutableSet, HUAccessoryDiagnosticsItemManager;

@interface HUAccessoryDiagnosticsItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *diagnosticItems;
@property (weak, nonatomic) HUAccessoryDiagnosticsItemManager *itemManager;

- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithItemManager:(id)a0;
- (id)invalidationReasons;

@end
