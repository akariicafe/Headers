@class NSUUID;

@interface KNLiveVideoSourceCollaborationCommandUsageState : TSKSosBase <NSCopying> {
    NSUUID *_singleCollaborationCommandUsageToken;
    BOOL _definedSingleCollaborationCommandUsageToken;
}

@property (readonly, nonatomic) BOOL hasMultipleCollaborationCommandUsageTokens;

+ (id)emptyUsageState;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1;
- (id)initWithSingleCollaborationCommandUsageToken:(id)a0 hasMultipleCollaborationCommandUsageTokens:(BOOL)a1;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)usageStateByAddingCollaborationCommandUsageToken:(id)a0;

@end
