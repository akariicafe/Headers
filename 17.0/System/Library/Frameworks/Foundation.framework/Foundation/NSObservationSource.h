@class NSString;

@interface NSObservationSource : NSObject <NSObservable> {
    id _observers[4];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void *)_observerStorageOfSize:(unsigned long long)a0;

@end
