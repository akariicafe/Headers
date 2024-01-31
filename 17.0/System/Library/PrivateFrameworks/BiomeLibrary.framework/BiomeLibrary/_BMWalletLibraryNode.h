@interface _BMWalletLibraryNode : _BMLibraryNode

+ (id)validKeyPaths;
+ (id)identifier;
+ (id)sublibraries;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)Transaction;
+ (id)SettledTransaction;
+ (id)syncPolicyForSettledTransaction;
+ (id)configurationForSettledTransaction;
+ (id)configurationForTransaction;
+ (id)storeConfigurationForSettledTransaction;
+ (id)storeConfigurationForTransaction;
+ (id)syncPolicyForTransaction;

@end
