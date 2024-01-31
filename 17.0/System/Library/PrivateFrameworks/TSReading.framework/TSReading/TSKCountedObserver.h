@class TSUWeakReference;

@interface TSKCountedObserver : NSObject {
    TSUWeakReference *mWeakObserver;
    unsigned long long mCount;
}

- (void)dealloc;
- (id)initWithObserver:(id)a0;
- (id)observer;
- (unsigned long long)incrementCount;
- (unsigned long long)decrementCount;

@end
