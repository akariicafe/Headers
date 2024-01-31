@class NSString, NSURL, NSMutableDictionary;

@interface GEOConfigStorageDirectReadOnly : NSObject <GEOConfigStorageReadOnly> {
    long long _source;
    NSURL *_path;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _valueStoreLock;
    NSMutableDictionary *_valueStore;
    struct atomic_flag { _Atomic BOOL _Value; } _isReading;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
