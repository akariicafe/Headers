@class NSArray;

@interface CertificateDetailsViewController : UITableViewController

@property (retain, nonatomic) id certificateTrust;
@property (retain, nonatomic) NSArray *keyValueSections;
@property (retain, nonatomic) NSArray *keyValueSectionTitles;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_setup;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)preferredContentSizeChanged:(id)a0;
- (id)initWithCertificateProperties:(id)a0;
- (void)setCertificateProperties:(id)a0;

@end
