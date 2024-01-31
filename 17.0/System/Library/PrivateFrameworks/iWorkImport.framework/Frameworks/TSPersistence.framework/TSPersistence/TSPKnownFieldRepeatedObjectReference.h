@class TSPLazyReferenceArray;

@interface TSPKnownFieldRepeatedObjectReference : TSPKnownFieldRepeatedStringValue {
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
