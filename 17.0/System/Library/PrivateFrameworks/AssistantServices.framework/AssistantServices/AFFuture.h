@class NSObject;
@protocol OS_dispatch_group;

@interface AFFuture : NSObject {
    NSObject<OS_dispatch_group> *_group;
    id _value;
}

- (void).cxx_destruct;
- (id)initAndGetSetterBlock:(id /* block */ *)a0;
- (id)waitForValue:(unsigned long long)a0;

@end
