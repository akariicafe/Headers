@interface CalDatabaseWriteLock : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)canonicalizePath:(id)a0;
+ (id)writeLockForDatabasePath:(id)a0;

- (id)init;
- (void)lock;
- (void)performWithWriteLock:(id /* block */)a0;
- (void)unlock;

@end
