@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject {
    NSDictionary *_attributes;
    NSDictionary *_unknownAttributes;
}

- (id)initWithAttributes:(id)a0 unknownAttributes:(id)a1;
- (void)dealloc;
- (id)UUIDStringForKey:(id)a0;
- (id)description;
- (BOOL)getInt32:(int *)a0 forKey:(id)a1;
- (BOOL)getUInt64:(unsigned long long *)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)getUInt16:(unsigned short *)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (id)dataForKey:(id)a0;

@end
