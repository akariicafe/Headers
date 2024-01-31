@interface _NSXPCConnectionExpectedReplies : NSObject {
    struct __CFDictionary { } *_replyTable;
    unsigned long long _sequence;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void)dealloc;

@end
