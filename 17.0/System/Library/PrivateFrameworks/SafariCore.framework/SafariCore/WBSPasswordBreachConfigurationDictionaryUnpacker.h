@class NSDictionary;

@interface WBSPasswordBreachConfigurationDictionaryUnpacker : NSObject {
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) BOOL errorOccurred;

- (id)dataFromHexStringForKey:(id)a0 expectedLength:(id)a1;
- (id)sortedUnsignedIntegerArrayForKey:(id)a0 minimumValue:(unsigned long long)a1 maximumValue:(unsigned long long)a2 ascending:(BOOL)a3;
- (BOOL)optionalBoolForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)_valueOfClass:(Class)a0 forKey:(id)a1 required:(BOOL)a2;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)unsignedIntegerForKey:(id)a0 minimumValue:(unsigned long long)a1 maximumValue:(unsigned long long)a2;
- (id)URLForKey:(id)a0;
- (void).cxx_destruct;
- (id)stringForKey:(id)a0 minimumLength:(unsigned long long)a1;

@end
