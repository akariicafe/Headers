@class NSString, NSMutableArray, UITableView;

@interface CertInfoCertificateDetailsView : UIView <UITableViewDataSource> {
    UITableView *_tableView;
    NSMutableArray *_tableSections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_cellInfosForSection:(id)a0;
- (id)_detailForIndexPath:(id)a0;
- (id)_sectionInfoForCertSection:(id)a0 title:(id)a1;
- (id)_sectionsFromProperties:(id)a0;
- (id)_titleForIndexPath:(id)a0;
- (void)appendInfoFromCertView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 certificateProperties:(id)a1;

@end
