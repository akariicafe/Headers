@interface CBFloatArray : NSObject {
    float *_data;
    unsigned long long _count;
    unsigned long long _size;
}

- (void)dealloc;
- (unsigned long long)count;
- (float *)mutableData;
- (const float *)data;
- (id)description;
- (id)initWithCount:(unsigned long long)a0;
- (float)get:(unsigned long long)a0;
- (const float *)at:(unsigned long long)a0;
- (id)copyNSArray;
- (float *)dataCopy;
- (id)initWithValues:(float *)a0 andCount:(unsigned long long)a1;

@end
