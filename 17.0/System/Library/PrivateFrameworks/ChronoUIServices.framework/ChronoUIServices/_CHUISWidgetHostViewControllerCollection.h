@class NSArray, NSHashTable;

@interface _CHUISWidgetHostViewControllerCollection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_viewControllers;
}

@property (readonly, copy, nonatomic) NSArray *viewControllers;

+ (id)sharedInstance;

- (id)init;
- (void)noteDestroyed:(id)a0;
- (void).cxx_destruct;
- (void)noteCreated:(id)a0;

@end
