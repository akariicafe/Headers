@class NSString, NSMutableDictionary;

@interface CalDescriptionBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *descriptionUnderConstruction;
@property (nonatomic) BOOL sortedByKey;
@property (copy, nonatomic) NSString *superclassDescription;
@property (copy, nonatomic) NSString *keyDelimiter;

- (id)init;
- (void)setKey:(id)a0 withUnsignedLong:(unsigned long long)a1;
- (void)setKey:(id)a0 withObject:(id)a1;
- (void)setKey:(id)a0 withEnumNumericalValue:(long long)a1 andStringValue:(id)a2;
- (void)setKey:(id)a0 withUnsignedInt:(unsigned int)a1;
- (void)setKey:(id)a0 withArray:(id)a1;
- (void)setKey:(id)a0 withPointerAddress:(const void *)a1;
- (id)build;
- (void)setKey:(id)a0 withFloat:(float)a1;
- (void)setKey:(id)a0 withUnsignedShort:(unsigned short)a1;
- (void)setKey:(id)a0 withDouble:(double)a1;
- (void)setKey:(id)a0 withChar:(char)a1;
- (void)setKey:(id)a0 withInteger:(long long)a1;
- (void)setKey:(id)a0 withProcessID:(int)a1;
- (void)setKey:(id)a0 withDispatchSource:(id)a1;
- (void)setKey:(id)a0 withDictionary:(id)a1;
- (void)setKey:(id)a0 withSelector:(SEL)a1;
- (id)description;
- (void)setKey:(id)a0 withShort:(short)a1;
- (void)setKey:(id)a0 withMachPort:(unsigned int)a1;
- (void)setKey:(id)a0 withSize:(unsigned long long)a1;
- (void)setKey:(id)a0 withDate:(id)a1;
- (void)setKey:(id)a0 withCharArray:(const char *)a1;
- (void)setKey:(id)a0 withTimeInterval:(double)a1;
- (void).cxx_destruct;
- (void)setKey:(id)a0 withBoolean:(BOOL)a1;
- (void)setKey:(id)a0 withLongLong:(long long)a1;
- (void)setKey:(id)a0 withClass:(Class)a1;
- (void)setKey:(id)a0 withLong:(long long)a1;
- (void)setKey:(id)a0 withDispatchQueue:(id)a1;
- (id)initWithSuperclassDescription:(id)a0;
- (void)setKey:(id)a0 withSet:(id)a1;
- (void)setKey:(id)a0 withInt:(int)a1;
- (void)setKey:(id)a0 withUnsignedLongLong:(unsigned long long)a1;
- (void)setKey:(id)a0 withString:(id)a1;
- (void)setKey:(id)a0 withUnsignedChar:(unsigned char)a1;
- (void)setKey:(id)a0 withUnsignedInteger:(unsigned long long)a1;

@end
