@class NSString, NSObject;

@interface AVCaptureBlockKVOObserver : NSObject {
    NSObject *_object;
    NSString *_keyPath;
    id /* block */ _handler;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObjectToObserve:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;

@end
