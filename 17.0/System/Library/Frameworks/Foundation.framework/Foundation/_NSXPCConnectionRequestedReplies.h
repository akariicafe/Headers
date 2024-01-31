@interface _NSXPCConnectionRequestedReplies : NSObject {
    struct __CFDictionary { } *_replyDictionaryTable;
    struct __CFDictionary { } *_replyTransactionTable;
    struct __CFDictionary { } *_progressTable;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _invalid;
}

- (id)init;
- (void)dealloc;

@end
