@class NSString, NSMutableDictionary;
@protocol BKHIDEventDispatcher;

@interface BKHIDGenericGestureEventProcessor : NSObject <BKIOHIDServiceDisappearanceObserver, BKHIDEventProcessor> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *pendingDestinationsPerSenderID;
@property (retain, nonatomic) NSMutableDictionary *genericGestureTypePerSenderID;
@property (retain, nonatomic) id<BKHIDEventDispatcher> eventDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
