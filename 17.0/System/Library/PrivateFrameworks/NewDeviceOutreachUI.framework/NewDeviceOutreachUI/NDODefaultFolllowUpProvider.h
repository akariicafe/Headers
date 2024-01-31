@class NSString;

@interface NDODefaultFolllowUpProvider : NSObject <NDOFollowUpProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)postFollowUpItem:(id)a0 error:(id *)a1;
- (id)pendingFollowUpItems:(id *)a0;

@end
