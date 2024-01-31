@class NSArray;

@interface _UIBarButtonItemActionBinding : NSObject {
    struct { unsigned char isMonitoring : 1; } _flags;
}

@property (retain, nonatomic) NSArray *barButtonItems;
@property (copy, nonatomic) id /* block */ registerObservers;
@property (copy, nonatomic) id /* block */ unregisterObservers;

- (void)stopMonitoring;
- (void)_update:(id)a0;
- (void).cxx_destruct;
- (void)startMonitoring;
- (id)initWithBarButtonItems:(id)a0 registerObservers:(id /* block */)a1 unregisterObservers:(id /* block */)a2;

@end
