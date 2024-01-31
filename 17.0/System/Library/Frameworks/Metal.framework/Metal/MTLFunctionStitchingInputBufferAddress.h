@class NSString;

@interface MTLFunctionStitchingInputBufferAddress : NSObject <MTLFunctionStitchingInputNodeSPI>

@property (nonatomic) unsigned long long byteOffset;
@property (nonatomic) BOOL dereference;
@property (nonatomic) unsigned long long bindIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBindIndex:(unsigned long long)a0 byteOffset:(unsigned long long)a1 dereference:(BOOL)a2;
- (id)initWithBindIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
