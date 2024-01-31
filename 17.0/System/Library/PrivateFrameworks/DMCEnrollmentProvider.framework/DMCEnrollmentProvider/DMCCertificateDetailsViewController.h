@class NSArray;

@interface DMCCertificateDetailsViewController : DMCProfileTableViewController

@property (retain, nonatomic) id certificateTrust;
@property (retain, nonatomic) NSArray *keyValueSections;
@property (retain, nonatomic) NSArray *keyValueSectionTitles;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_setup;
- (id)initWithStyle:(long long)a0;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (void).cxx_destruct;
- (id)initWithCertificateProperties:(id)a0;

@end
