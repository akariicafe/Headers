@class NSDictionary;

@interface STRPPropertyListTypeDecoder : NSCoder {
    NSDictionary *_storage;
}

+ (id)_supportedCoreTypesForEncoding;

- (BOOL)containsValueForKey:(id)a0;
- (float)decodeFloatForKey:(id)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (BOOL)allowsKeyedCoding;
- (long long)decodeIntegerForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (double)decodeDoubleForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)decodeDictionaryWithKeysOfClasses:(id)a0 objectsOfClasses:(id)a1 forKey:(id)a2;
- (void).cxx_destruct;
- (id)decodeObjectForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (id)decodeArrayOfObjectsOfClasses:(id)a0 forKey:(id)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (id)decodeArrayOfObjectsOfClass:(Class)a0 forKey:(id)a1;
- (id)decodeDictionaryWithKeysOfClass:(Class)a0 objectsOfClass:(Class)a1 forKey:(id)a2;
- (id)decodeTopLevelObjectForKey:(id)a0 error:(id *)a1;
- (id)_numberForKey:(id)a0;
- (id)_errorWithCode:(long long)a0 message:(id)a1;
- (id)_decodeObjectOfClasses:(id)a0 fromObject:(id)a1;
- (id)_failWithCode:(long long)a0 message:(id)a1;
- (id)decodeRootObjectOfClass:(Class)a0 fromEncoded:(id)a1 error:(id *)a2;

@end
