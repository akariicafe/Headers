@protocol MTLDevice;

@interface MPSAccelerationStructureGroup : NSObject {
    void *_bvhGroup;
}

@property (readonly, nonatomic) id<MTLDevice> device;

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (void *)bvhGroup;
- (id)initWithDevice:(id)a0 storageMode:(unsigned long long)a1;

@end
