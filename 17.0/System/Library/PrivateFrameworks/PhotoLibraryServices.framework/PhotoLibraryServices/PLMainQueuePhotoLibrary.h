@interface PLMainQueuePhotoLibrary : PLPhotoLibrary {
    int _splChangedToken;
}

+ (id)systemMainQueuePhotoLibrary;
+ (void)_resetSharedInstance;

- (void)dealloc;
- (id)initWithName:(const char *)a0 libraryBundle:(id)a1 options:(id)a2;

@end
