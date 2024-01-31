@interface SUDownloadPolicyFactory : NSObject

+ (id)_userDownloadPolicyFromCurrentPolicy:(id)a0 descriptor:(id)a1 networkMonitor:(id)a2 allowCellularOverride:(BOOL)a3;
+ (id)downloadPolicyForType:(int)a0 forDescriptor:(id)a1;
+ (int)downloadPolicyTypeForClass:(id)a0;
+ (id)userDownloadPolicyForDescriptor:(id)a0;
+ (id)userDownloadPolicyForDescriptor:(id)a0 existingPolicy:(id)a1;
+ (id)userDownloadPolicyForDescriptor:(id)a0 existingPolicy:(id)a1 allowCellularOverride:(BOOL)a2;
+ (id)userDownloadPolicyForDescriptor:(id)a0 existingPolicy:(id)a1 networkMonitor:(id)a2 allowCellularOverride:(BOOL)a3;

@end
