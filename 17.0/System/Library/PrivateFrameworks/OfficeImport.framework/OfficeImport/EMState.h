@class EDSheet, NSMutableDictionary, EDWorkbook;

@interface EMState : CMState {
    EDWorkbook *_workbook;
    NSMutableDictionary *_hyperlinks;
}

@property (retain) EDWorkbook *document;
@property (weak) EDSheet *currentSheet;

- (void).cxx_destruct;
- (id)hyperlinkForRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (void)setHyperlink:(id)a0 forRow:(unsigned long long)a1 column:(unsigned long long)a2;

@end
