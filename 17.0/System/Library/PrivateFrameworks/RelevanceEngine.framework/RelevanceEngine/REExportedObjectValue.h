@interface REExportedObjectValue : REExportedValue {
    id _object;
    BOOL _allowsEncoding;
}

- (id)initWithObject:(id)a0;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (id)objectValue;
- (void).cxx_destruct;
- (unsigned long long)type;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;
- (BOOL)shouldEncodeProperty:(id)a0;

@end
