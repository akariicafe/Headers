@interface VCVideoHardwareDumpWriter : NSObject {
    void *_dumpFile;
    struct __CFSet { } *_sources;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _registrationLock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;

@end
