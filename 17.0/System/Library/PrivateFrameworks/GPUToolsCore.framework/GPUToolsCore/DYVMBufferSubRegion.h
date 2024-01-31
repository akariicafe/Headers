@class NSString, DYVMBuffer;

@interface DYVMBufferSubRegion : NSObject <DYVMBufferSubRegion> {
    DYVMBuffer *_parent;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)length;
- (const void *)bytes;
- (id)DYGPUToolsData;
- (id)initWithDYVMBuffer:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
