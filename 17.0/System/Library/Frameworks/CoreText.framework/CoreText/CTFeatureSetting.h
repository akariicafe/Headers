@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {
    NSDictionary *_dictionary;
}

- (void)dealloc;
- (id)keyEnumerator;
- (unsigned long long)count;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)objectForKey:(id)a0;

@end
