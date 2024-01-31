@class NSSimpleAttributeDictionary;

@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator {
    NSSimpleAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (void)dealloc;
- (id)initWithAttributeDictionary:(id)a0;
- (id)nextObject;

@end
