@class NSString, PRSServerPosterPath;

@interface PRSWallpaperObserverSnapshotUpdate : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) PRSServerPosterPath *path;
@property (readonly, nonatomic) NSString *snapshotType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithPath:(id)a0 snapshotType:(id)a1;

@end
