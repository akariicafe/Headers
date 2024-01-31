@class NSString, NSData;

@interface APOdmlVector : NSObject <NSSecureCoding> {
    float *_dataPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned int length;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)magnitude;
- (id)initWithVersion:(id)a0 data:(id)a1;
- (id)vectorSubtract:(id)a0;
- (id)scalarMultiply:(float)a0;
- (float *)_createDataPtrFromArray:(id)a0;
- (id)_initWithVersion:(id)a0 length:(unsigned int)a1 rawMallocedFloats:(float *)a2;
- (id)arrayOfNumbers;
- (id)cosineSimilarity:(id)a0;
- (float)dotProduct:(id)a0;
- (id)initWithVersion:(id)a0 andArray:(id)a1;
- (id)initWithVersion:(id)a0 length:(unsigned int)a1 floats:(float *)a2;
- (void)setArrayOfNumber:(id)a0;
- (void)setDataPtr:(float *)a0;
- (id)vectorAdd:(id)a0;

@end
