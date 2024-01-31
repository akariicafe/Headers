@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (id)retain;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)initWithOwner:(id)a0;
- (id)objectForKey:(id)a0;
- (oneway void)release;
- (void)superRelease;

@end
