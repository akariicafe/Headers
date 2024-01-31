@interface BRCServerChangesApplyUtil : NSObject

+ (BOOL)shouldForceApplyContentForItem:(id)a0;
+ (BOOL)checkEarlyExitsPriorToApplying:(id)a0 si:(id)a1 rank:(long long)a2 scheduler:(id)a3 zone:(id)a4 session:(id)a5 isDeleteOfShareRoot:(BOOL)a6 diffs:(unsigned long long)a7 clientZone:(id)a8;
+ (BOOL)deletingShareRoot:(id)a0 localItem:(id)a1;
+ (BOOL)handleApplyChangesForUnliveServerItem:(id)a0 isDeleteOfShareRoot:(BOOL)a1 rank:(long long)a2 scheduler:(id)a3 zone:(id)a4 session:(id)a5;
+ (BOOL)handleEtagsChangesOnly:(id)a0 si:(id)a1 rank:(long long)a2 scheduler:(id)a3 zone:(id)a4 diffs:(unsigned long long *)a5 needsSave:(BOOL *)a6;
+ (BOOL)handleNonRevivedItemIfNecessary:(id)a0 si:(id)a1 rank:(long long)a2 scheduler:(id)a3 zone:(id)a4;

@end
