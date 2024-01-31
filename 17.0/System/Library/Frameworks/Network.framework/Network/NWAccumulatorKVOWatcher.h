@class NSString, NSObject;

@interface NWAccumulatorKVOWatcher : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject *object;
@property (retain, nonatomic) NSString *keyPath;
@property (copy, nonatomic) id /* block */ callback;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)updateWithState:(id)a0;

@end
