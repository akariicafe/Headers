@class NSString;

@interface NWAccumulatorOverrideState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *name;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)updateWithState:(id)a0;

@end
