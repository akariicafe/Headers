@class NSString, NSDictionary, NSData, NSObject;
@protocol OS_os_log;

@interface PFClientSideEncryptionManager : NSObject {
    NSString *_keychainAccessGroup;
    NSString *_keychainApplicationLabel;
    NSString *_keychainViewHint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _state;
    NSData *_keyData;
    NSDictionary *_keyMetadata;
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) BOOL isReady;

- (id)initWithProfile:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)archiveDirectoryAtURL:(id)a0 toOutputURL:(id)a1 dataType:(long long)a2 options:(id)a3 entryPredicate:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)shutdownWithCompletionHandler:(id /* block */)a0;
- (BOOL)unarchiveDirectoryAtURL:(id)a0 error:(id *)a1;
- (id)configurationForProfile:(id)a0;
- (BOOL)createKeychainEntryReturningKeyData:(id *)a0 keyInfo:(id *)a1;
- (BOOL)findExistingKeychainEntryReturningKeyData:(id *)a0 keyInfo:(id *)a1;

@end
