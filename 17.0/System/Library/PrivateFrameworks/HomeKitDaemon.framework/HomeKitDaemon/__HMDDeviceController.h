@class HMDAccountRegistry;

@interface __HMDDeviceController : HMDDeviceController

@property (readonly) HMDAccountRegistry *accountRegistry;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 accountRegistry:(id)a1;
- (void)__handleAddedAccount:(id)a0;
- (void)__handleAddedDevice:(id)a0;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
