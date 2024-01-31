@class NSString, NSMapTable, ICCRDocument;

@interface ICCRDictionary : NSObject <ICCRDataType, NSFastEnumeration, ICCRCoding>

@property (retain, nonatomic) NSMapTable *contents;
@property (nonatomic) long long removeClock;
@property (weak, nonatomic) ICCRDocument *document;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeAllObjects;
- (void)mergeWithDictionary:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)keyEnumerator;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithDocument:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (void)enumerateKeysObjectsAndTimestampsUsingBlock:(id /* block */)a0;
- (void)encodeWithICCRCoder:(id)a0 dictionary:(void *)a1;
- (void)encodeWithICCRCoder:(id)a0;
- (void)encodeWithICCRCoder:(id)a0 dictionary:(void *)a1 elementValueCoder:(id /* block */)a2;
- (id)initWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0 dictionary:(const void *)a1;
- (id)initWithICCRCoder:(id)a0 dictionary:(const void *)a1 elementValueDecoder:(id /* block */)a2;

@end
