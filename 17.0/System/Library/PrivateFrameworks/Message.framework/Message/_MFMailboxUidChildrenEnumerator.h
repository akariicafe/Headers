@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator {
    NSMutableArray *_mailboxes;
    unsigned long long _index;
    BOOL _includeHidden;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)_initWithMailbox:(id)a0 includeHiddenChildren:(BOOL)a1;

@end
