@class NSString, WBTabGroupManager, NSArray;

@interface WBSProfileStartPageManagerStorage : NSObject <WBSStartPageSectionManagerStorage, WBTabGroupManagerObserver>

@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager;
@property (readonly, copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSArray *startPageSectionDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)tabGroupManager:(id)a0 didUpdateProfileWithIdentifier:(id)a1 difference:(id)a2;
- (void).cxx_destruct;
- (id)initWithProfileIdentifier:(id)a0 tabGroupManager:(id)a1;
- (id)startPageSectionsDataRepresentation;

@end
