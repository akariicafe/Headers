@class NSData, NSMutableArray;

@interface MSCMSMutableAttributeArray : NSMutableArray

@property (retain) NSMutableArray *attributes;
@property (retain) NSMutableArray *genericAttributes;
@property (retain) NSData *encodedAttributeSet;

+ (id)createAttributeArrayFromAttributeSetRaw:(struct heim_base_data { unsigned long long x0; void *x1; } *)a0 error:(id *)a1;

- (void)reset;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAttributes:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeLastObject;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)getAttributesWithType:(id)a0;
- (id)calculateAttributesWithDigest:(id)a0 error:(id *)a1;
- (id)encodeAttributesWithError:(id *)a0;
- (id)encodeImplicitAttributesWithError:(id *)a0;

@end
