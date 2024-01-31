@interface HRAtrialFibrillationEducationSection : HKDataMetadataSection

@property (readonly, nonatomic) BOOL forSinglePlayer;

- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (id)_viewControllerForEducationRow:(unsigned long long)a0;
- (id)_cellTitleForEducationRow:(unsigned long long)a0;
- (id)initForSinglePlayer:(BOOL)a0;

@end
