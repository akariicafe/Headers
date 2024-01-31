@interface MPNondurableMediaItem : MPMediaItem {
    unsigned long long _persistentID;
}

+ (BOOL)supportsSecureCoding;
+ (id)defaultPropertyValues;
+ (BOOL)canFilterByProperty:(id)a0;

- (void)setValue:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)valueForProperty:(id)a0;
- (id)mediaLibrary;
- (id)initWithCoder:(id)a0;
- (unsigned long long)persistentID;
- (BOOL)existsInLibrary;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithPersistentID:(unsigned long long)a0;
- (BOOL)isUsableAsRepresentativeItem;
- (id)valuesForProperties:(id)a0;

@end
