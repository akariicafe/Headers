@class NSMutableSet;

@interface BMBookmarkClasses : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_allowed;
    BOOL _addedBiomeStorageClasses;
}

+ (id)sharedInstance;

- (id)init;
- (id)allowedClassesForSecureCodingBMBookmark;
- (void).cxx_destruct;
- (void)allowClassesForSecureCodingBMBookmark:(id)a0;

@end
