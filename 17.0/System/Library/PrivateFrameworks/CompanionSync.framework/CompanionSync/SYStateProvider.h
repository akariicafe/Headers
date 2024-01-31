@interface SYStateProvider : NSObject {
    unsigned int _type;
    unsigned long long _handle;
    id _state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) id /* block */ encoder;

+ (id)stateProviderWithName:(id)a0 type:(unsigned int)a1 typeName:(id)a2;

- (void)updateState:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_encodedState;
- (id)initWithName:(id)a0 type:(unsigned int)a1 typeName:(id)a2;

@end
