@class WFTriggerRegistrar, NSSet;

@interface VCShortcutsObliterator : NSObject

@property (readonly, nonatomic) WFTriggerRegistrar *triggerRegistrar;
@property (readonly, nonatomic) NSSet *syncDataHandlers;

- (void).cxx_destruct;
- (BOOL)deleteAppGroupWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deleteDataVaultWithError:(id *)a0;
- (BOOL)deleteKeychainItemsWithError:(id *)a0;
- (id)initWithTriggerRegistrar:(id)a0 syncDataHandlers:(id)a1;
- (void)obliterate:(id *)a0;
- (void)resetWatchSync;
- (BOOL)terminateProcessWithIdentifier:(id)a0 assertion:(out id *)a1 error:(out id *)a2;

@end
