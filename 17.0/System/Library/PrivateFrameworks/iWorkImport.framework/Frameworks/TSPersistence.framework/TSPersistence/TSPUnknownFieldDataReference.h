@class NSArray;

@interface TSPUnknownFieldDataReference : TSPUnknownField {
    NSArray *_datas;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
