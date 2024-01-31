@class NSAttributeDictionary;

@interface NSAttributeDictionaryEnumerator : NSEnumerator {
    NSAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (void)dealloc;
- (id)initWithAttributeDictionary:(id)a0;
- (id)nextObject;

@end
