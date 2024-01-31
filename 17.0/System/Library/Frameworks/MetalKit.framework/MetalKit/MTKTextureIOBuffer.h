@class NSString;
@protocol MTLBuffer;

@interface MTKTextureIOBuffer : NSObject <TXRBuffer>

@property (readonly, nonatomic) id<MTLBuffer> buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)map;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 deallocNotification:(id /* block */)a2 device:(id)a3 error:(id *)a4;
- (id)initWithLength:(unsigned long long)a0 device:(id)a1;

@end
