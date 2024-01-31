@class NSString;

@interface _FMBoundedQueueingStrategy : NSObject <FMQueueingStrategy> {
    unsigned long long _capacity;
    id /* block */ _overflowHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
