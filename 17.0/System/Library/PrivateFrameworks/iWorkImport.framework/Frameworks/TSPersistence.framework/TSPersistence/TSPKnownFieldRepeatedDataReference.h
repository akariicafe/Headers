@class NSArray;

@interface TSPKnownFieldRepeatedDataReference : TSPKnownFieldRepeatedStringValue {
    NSArray *_allData;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
