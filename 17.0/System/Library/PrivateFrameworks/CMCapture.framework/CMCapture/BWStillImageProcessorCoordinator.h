@class NSDictionary;

@interface BWStillImageProcessorCoordinator : NSObject {
    NSDictionary *_processorControllersByType;
}

- (void)dealloc;
- (id)controllerForType:(unsigned long long)a0;
- (id)initWithProcessorControllers:(id)a0;
- (id)processorControllerNames;

@end
