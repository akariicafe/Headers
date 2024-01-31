@class NSString;

@interface PSUIPlanPendingTransferListGroup : NSObject <PSSpecifierGroup>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;

@end
