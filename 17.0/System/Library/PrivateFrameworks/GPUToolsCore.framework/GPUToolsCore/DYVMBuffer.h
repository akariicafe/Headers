@class NSString;

@interface DYVMBuffer : NSObject <DYVMBuffer>

@property (readonly, nonatomic) struct VMBuffer { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } *vmBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLength:(unsigned long long)a0;
- (void)setLength:(unsigned long long)a0;
- (void)dealloc;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)length;
- (void *)mutableBytes;
- (const void *)bytes;
- (id)initWithVMBuffer:(struct VMBuffer { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } *)a0;

@end
