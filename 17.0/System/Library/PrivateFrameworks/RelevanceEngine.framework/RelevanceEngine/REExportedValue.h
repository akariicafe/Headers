@interface REExportedValue : NSObject

+ (id)_exportedValueForTable:(id)a0;
+ (id)exportedValueForArray:(id)a0;
+ (id)exportedValueForDate:(id)a0;
+ (id)exportedValueForDictionary:(id)a0;
+ (id)exportedValueForNumber:(id)a0;
+ (id)exportedValueForObject:(id)a0;
+ (id)exportedValueForString:(id)a0;

- (id)stringValue;
- (void)enumerateValuesUsingBlock:(id /* block */)a0;
- (id)objectValue;
- (id)numberValue;
- (id)dictionaryValue;
- (id)dateValue;
- (unsigned long long)type;
- (id)arrayValue;
- (unsigned long long)propertyCount;
- (id)exportedValueForKey:(id)a0;
- (BOOL)shouldEncodeProperty:(id)a0;

@end
