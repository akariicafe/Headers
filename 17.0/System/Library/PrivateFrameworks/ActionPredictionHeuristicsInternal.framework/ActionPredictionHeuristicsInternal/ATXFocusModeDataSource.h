@class ATXHeuristicDevice;

@interface ATXFocusModeDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void)isFocusModeActive:(id /* block */)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
