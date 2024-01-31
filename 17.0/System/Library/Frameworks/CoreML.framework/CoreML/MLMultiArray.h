@class NSArray;

@interface MLMultiArray : NSObject <NSSecureCoding> {
    struct unique_ptr<StorageManager, std::default_delete<StorageManager>> { struct __compressed_pair<StorageManager *, std::default_delete<StorageManager>> { struct StorageManager *__value_; } __ptr_; } _storageManager;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *bytes;
@property (readonly, nonatomic) void *mutableBytes;
@property (readonly, nonatomic) unsigned long long numberOfBytesPerElement;
@property (readonly, nonatomic, getter=isContiguous) BOOL contiguous;
@property (readonly, nonatomic) BOOL backingPixelBufferWasLocked;
@property (readonly, nonatomic) void *dataPointer;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) NSArray *strides;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

+ (id)stringForDataType:(long long)a0;
+ (id)_multiArrayByConcatenatingMultiArrays:(id)a0 alongAxis:(long long)a1 dataType:(long long)a2;
+ (id)_shapeOfNestedArray:(id)a0 error:(id *)a1;
+ (int)cppStorageOrder:(long long)a0;
+ (id)doubleMatrixWithValues:(id)a0 error:(id *)a1;
+ (id)doubleMultiArrayWithCopyOfMultiArray:(id)a0;
+ (id)doubleMultiArrayWithShape:(id)a0 valueArray:(id)a1 error:(id *)a2;
+ (id)doubleVectorWithValues:(id)a0;
+ (id)float32MatrixWithValues:(id)a0 error:(id *)a1;
+ (BOOL)getShapeOfArrayOfSameLengthArrays:(id)a0 numberOfRows:(unsigned long long *)a1 numberOfColumns:(unsigned long long *)a2 error:(id *)a3;
+ (id)multiArrayByConcatenatingMultiArrays:(id)a0 alongAxis:(long long)a1 dataType:(long long)a2;
+ (id)multiArrayOwningBufferObjectOfPort:(struct e5rt_io_port { } *)a0 error:(id *)a1;
+ (struct __CVBuffer { } *)pixelBufferBGRA8FromMultiArrayCHW:(id)a0 channelOrderIsBGR:(BOOL)a1 error:(id *)a2;
+ (struct __CVBuffer { } *)pixelBufferGray16HalfFromMultiArrayHW:(id)a0 error:(id *)a1;
+ (struct __CVBuffer { } *)pixelBufferGray8FromMultiArrayHW:(id)a0 error:(id *)a1;
+ (BOOL)validateMultiArrays:(id)a0 forConcatenatingAlongAxis:(long long)a1 normalizedAxis:(unsigned long long *)a2 reason:(id *)a3;
+ (BOOL)validateNestedArray:(id)a0 error:(id *)a1;

- (id)debugQuickLookObject;
- (void)setObject:(id)a0 atIndexedSubscript:(long long)a1;
- (unsigned long long)offsetForKeyedSubscript:(id)a0;
- (id)init;
- (BOOL)isContiguousInOrder:(long long)a0;
- (id)multiArrayViewExpandingDimensionsAtAxis:(long long)a0;
- (void)setNumber:(id)a0 atOffset:(unsigned long long)a1;
- (BOOL)renderToOneComponent8PixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)numberAtOffset:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(long long)a0;
- (id)initWithBytesNoCopy:(void *)a0 shape:(id)a1 dataType:(long long)a2 strides:(id)a3 deallocator:(id /* block */)a4 mutableShapedBufferProvider:(id /* block */)a5 error:(id *)a6;
- (id)initWithMultiArrayBuffer:(struct shared_ptr<CoreML::MultiArrayBuffer> { struct MultiArrayBuffer *x0; struct __shared_weak_count *x1; })a0;
- (id)squeezeDimensions:(id)a0 error:(id *)a1;
- (void *)multiArrayBuffer;
- (void)encodeWithCoder:(id)a0;
- (id)initWithShape:(id)a0 dataType:(long long)a1 storageOrder:(long long)a2 bufferAlignment:(unsigned long long)a3;
- (id)initWithDataPointer:(void *)a0 shape:(id)a1 dataType:(long long)a2 strides:(id)a3 deallocator:(id /* block */)a4 error:(id *)a5;
- (double *)doublePointer;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id).cxx_construct;
- (BOOL)renderTo32BGRAPixelBuffer:(struct __CVBuffer { } *)a0 channelOrderIsBGR:(BOOL)a1 error:(id *)a2;
- (id)initWithShape:(id)a0 dataType:(long long)a1 error:(id *)a2;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 shape:(id)a1;
- (BOOL)vectorizeIntoMultiArray:(id)a0 storageOrder:(long long)a1 error:(id *)a2;
- (id)initWithShape:(id)a0 dataType:(long long)a1 storageOrder:(long long)a2 error:(id *)a3;
- (id)description;
- (id)numberArray;
- (id)initWithArray:(id)a0 dataType:(long long)a1;
- (BOOL)renderToCVPixelBuffer:(struct __CVBuffer { } *)a0 channelOrderIsBGR:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (float *)float32Pointer;
- (id)sliceAtOrigin:(id)a0 shape:(id)a1 squeeze:(BOOL)a2 error:(id *)a3;
- (BOOL)fillWithNumber:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)copyIntoMultiArray:(id)a0 error:(id *)a1;
- (BOOL)setRangeWithRawData:(id)a0 destIndex:(unsigned long long)a1 error:(id *)a2;
- (void)getContiguousFirstMajorFloat32BufferWithHandler:(id /* block */)a0;
- (void)getBytesWithHandler:(id /* block */)a0;
- (id)initWithScalars:(id)a0 shape:(id)a1 dataType:(long long)a2;
- (id)initWithBytesNoCopy:(void *)a0 shape:(id)a1 dataType:(long long)a2 strides:(id)a3 mutableShapedBufferProvider:(id /* block */)a4;
- (BOOL)isEqualToMultiArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)renderToOneComponent16HalfPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (void)getMutableBytesWithHandler:(id /* block */)a0;
- (id)squeeze;

@end
