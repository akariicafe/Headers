@class NSDictionary;

@interface REExportedDictionaryValue : REExportedValue {
    NSDictionary *_dictionary;
}

- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;

@end
