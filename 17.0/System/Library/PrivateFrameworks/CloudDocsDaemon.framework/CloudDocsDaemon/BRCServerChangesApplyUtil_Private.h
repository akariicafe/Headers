@interface BRCServerChangesApplyUtil_Private : NSObject

+ (BOOL)_handleApplyingDeletedUnlistedDirectoryIfNecessary:(id)a0 localItem:(id)a1 parent:(id)a2;
+ (BOOL)appLibraryUndergoingCZM:(id)a0 zone:(id)a1 rank:(long long)a2 parentID:(id)a3 scheduler:(id)a4 session:(id)a5;
+ (BOOL)itemUndergoingCZMToAnotherZone:(id)a0 si:(id)a1 clientZone:(id)a2 rank:(long long)a3 scheduler:(id)a4 zone:(id)a5;
+ (BOOL)localItemHasUnsyncedChanges:(id)a0 si:(id)a1 rank:(long long)a2 scheduler:(id)a3 clientZone:(id)a4 zone:(id)a5 isDeleteOfShareRoot:(BOOL)a6 session:(id)a7;
+ (BOOL)serverItemDeadWithNoLiveLocalItem:(id)a0 si:(id)a1 rank:(long long)a2 scheduler:(id)a3 clientZone:(id)a4 zone:(id)a5;
+ (BOOL)serverItemWouldBeParentedToDeadFolder:(id)a0 si:(id)a1 rank:(long long)a2 scheduler:(id)a3 zone:(id)a4 diffs:(unsigned long long)a5;

@end
