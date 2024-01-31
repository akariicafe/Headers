@class NSString;

@interface _CNSpatialBufferingStrategy : NSObject <_CNBufferingStrategy> {
    unsigned long long _capacity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCapacity:(unsigned long long)a0;
- (void)buffer:(id)a0 didReceiveResults:(id)a1 forObserver:(id)a2;
- (void)bufferDidSendResults:(id)a0;

@end
