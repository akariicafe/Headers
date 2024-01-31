@class NSMutableArray;

@interface _ASKResourceCacheGroup : NSObject {
    NSMutableArray *_memberContents;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _guard;
}

@property BOOL hasMultipleMembers;

- (id)init;
- (id)onlyMemberContents;
- (id)snapshotMemberContents;
- (void).cxx_destruct;
- (id)makeMemberContents;
- (void)discardMemberContents:(id)a0;

@end
