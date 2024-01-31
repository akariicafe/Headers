@class NSArray, TSPLazyReferenceArray;

@interface TSPUnknownFieldMessage : TSPUnknownField {
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
    NSArray *_datas;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
