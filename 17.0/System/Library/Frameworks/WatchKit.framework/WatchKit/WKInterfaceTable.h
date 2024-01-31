@class NSDictionary, NSMutableArray, WKInterfaceController;

@interface WKInterfaceTable : WKInterfaceObject

@property (copy, nonatomic) NSDictionary *rowDescriptions;
@property (retain, nonatomic) NSMutableArray *rowControllers;
@property (retain, nonatomic) NSMutableArray *rowControllerProperties;
@property (weak, nonatomic) WKInterfaceController *controller;
@property (readonly, nonatomic) long long numberOfRows;

- (void).cxx_destruct;
- (void)_getRowControllers:(id)a0 rowControllerProperties:(id)a1 forRowTypes:(id)a2;
- (void)_setupWithDescription:(id)a0 forController:(id)a1;
- (void)insertRowsAtIndexes:(id)a0 withRowType:(id)a1;
- (void)performSegueForRow:(long long)a0;
- (void)removeRowsAtIndexes:(id)a0;
- (void)resequenceRowControllerPropertyIndexes;
- (id)rowControllerAtIndex:(long long)a0;
- (void)scrollToRowAtIndex:(long long)a0;
- (void)setNumberOfRows:(long long)a0 withRowType:(id)a1;
- (void)setRowTypes:(id)a0;

@end
