@interface MRMutableVirtualTouchDeviceDescriptor : MRVirtualTouchDeviceDescriptor

@property (nonatomic, getter=isAbsolute) BOOL absolute;
@property (nonatomic, getter=isIntegratedDisplay) BOOL integratedDisplay;
@property (nonatomic) union _MRHIDSize { struct { float x0; float x1; } x0; float x1[2]; } screenSize;

- (void)setScreenSize:(union _MRHIDSize { struct { float x0; float x1; } x0; float x1[2]; })a0;
- (void)setAbsolute:(BOOL)a0;
- (void)setIntegratedDisplay:(BOOL)a0;

@end
