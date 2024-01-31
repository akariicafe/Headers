@class NSArray, NSString;
@protocol ISKVOProxyDelegate;

@interface ISKVOProxy : NSObject {
    id _target;
    NSArray *_keyPaths;
    NSString *_identifier;
}

@property (weak, nonatomic) id<ISKVOProxyDelegate> delegate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 keyPaths:(id)a1 identifier:(id)a2 delegate:(id)a3;
- (void)startObservingTarget;
- (void)stopObservingTarget;

@end
