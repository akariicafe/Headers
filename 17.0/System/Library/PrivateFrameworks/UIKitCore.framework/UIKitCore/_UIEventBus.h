@class NSMutableArray;
@protocol _UIUpdateHIDAbstractInput;

@interface _UIEventBus : NSObject {
    NSMutableArray *_events;
    id<_UIUpdateHIDAbstractInput> _inputs[3];
}

- (id)init;
- (void).cxx_destruct;

@end
