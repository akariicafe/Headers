@class NSArray;

@interface WDResearchStudySourcesListTableViewSection : WDSourcesListTableViewSection

@property (copy, nonatomic) NSArray *researchSources;

- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (id)titleForHeader;
- (id)cellForRow:(unsigned long long)a0 table:(id)a1;
- (void)didSelectRow:(unsigned long long)a0 representedByCell:(id)a1 withCompletion:(id /* block */)a2;
- (id)titleForFooter;
- (id)noneString;
- (id)_sourceCellForRow:(unsigned long long)a0 tableView:(id)a1;
- (void)dataSourceDidUpdate;

@end
