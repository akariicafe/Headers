@class NSMutableDictionary;

@interface HMFClassRegistry : HMFObject {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    NSMutableDictionary *_classes;
}

@property (readonly, nonatomic) Class defaultClass;

- (id)init;
- (Class)classForKey:(id)a0;
- (void)setClass:(Class)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithDefaultClass:(Class)a0;

@end
