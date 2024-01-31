@class NSString;

@interface PSUICellularPlanListGroup : NSObject <PSSpecifierGroup>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (id)specifiers;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void)danglingPlanPressed:(id)a0;
- (id)danglingPlanSpecifierDetailText:(id)a0;
- (id)planSpecifierDetailText:(id)a0;

@end
