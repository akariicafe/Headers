@class MCProfileTitlePageTitleCell, MCProfileTitlePageSubtitleCell, MCProfile, MCProfileTitlePageOrganizationCell, NSString, MCProfileTitlePageSettingsIconCell, UITableView;

@interface MCProfileTitlePageMetaDataSectionController : NSObject <MCProfileTitlePageSectionController>

@property (retain, nonatomic) MCProfile *profile;
@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MCProfileTitlePageSettingsIconCell *iconCell;
@property (retain, nonatomic) MCProfileTitlePageTitleCell *titleCell;
@property (retain, nonatomic) MCProfileTitlePageSubtitleCell *subtitleCell;
@property (retain, nonatomic) MCProfileTitlePageOrganizationCell *orgCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfRows;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)titleForHeader;
- (double)heightForHeader;
- (void)registerCellClassWithTableView:(id)a0;
- (id)cellForRowAtIndex:(unsigned long long)a0;
- (double)heightForRowAtIndex:(unsigned long long)a0;

@end
