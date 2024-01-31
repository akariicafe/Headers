@class ICTableAccessibilityController, ICTable, NSMutableDictionary;

@interface ICTableAccessibilityElementProvider : NSObject

@property (weak, nonatomic) ICTableAccessibilityController *tableAXController;
@property (readonly, nonatomic) ICTable *tableModel;
@property (retain, nonatomic) NSMutableDictionary *cellCache;

- (void).cxx_destruct;
- (id)cellElementForColumnID:(id)a0 rowID:(id)a1;
- (id)cellElementsForColumnID:(id)a0;
- (id)cellElementsForRowID:(id)a0;
- (id)initWithTableAccessibilityController:(id)a0;
- (void)removeElementsForColumnID:(id)a0;
- (void)removeElementsForRowID:(id)a0;

@end
