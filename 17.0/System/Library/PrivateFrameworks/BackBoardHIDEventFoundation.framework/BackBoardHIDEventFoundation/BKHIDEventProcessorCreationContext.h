@protocol BKHIDEventDispatcher, BKIOHIDServiceMatcherDataProviding, BKHIDEventProcessorRegistering, BKHIDSystemInterfacing;

@interface BKHIDEventProcessorCreationContext : NSObject

@property (retain, nonatomic) id<BKHIDSystemInterfacing> systemInterface;
@property (retain, nonatomic) id<BKHIDEventDispatcher> eventDispatcher;
@property (retain, nonatomic) id<BKIOHIDServiceMatcherDataProviding> serviceMatcherDataProvider;
@property (retain, nonatomic) id<BKHIDEventProcessorRegistering> eventProcessorRegistry;

- (void).cxx_destruct;

@end
