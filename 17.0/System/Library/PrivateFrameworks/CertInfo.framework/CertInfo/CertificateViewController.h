@class NSString, NSArray, NSDate;

@interface CertificateViewController : UITableViewController

@property (retain, nonatomic) NSString *certificateTitle;
@property (retain, nonatomic) NSString *certificateIssuer;
@property (retain, nonatomic) NSString *certificatePurpose;
@property (retain, nonatomic) NSDate *certificateExpiration;
@property (retain, nonatomic) NSArray *certificateProperties;
@property (nonatomic) BOOL certificateIsRoot;
@property (nonatomic) BOOL showCertificateButton;
@property (retain, nonatomic) NSString *certificateButtonTitle;
@property (retain, nonatomic) NSString *certificateButtonDescription;
@property (nonatomic) BOOL certificateButtonIsDestructiveAction;
@property (copy, nonatomic) id /* block */ certificateButtonActionHandler;
@property (retain, nonatomic) id certificateTrust;
@property (nonatomic) int certUIAction;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)preferredContentSizeChanged:(id)a0;
- (id)initWithTrust:(struct __SecTrust { } *)a0 action:(int)a1;
- (void)setCertificateTitle:(id)a0 issuer:(id)a1 purpose:(id)a2 expiration:(id)a3 properties:(id)a4 isRoot:(BOOL)a5 action:(int)a6;
- (void)setShowCertificateButton:(BOOL)a0 localizedTitle:(id)a1 localizedDescription:(id)a2 destructive:(BOOL)a3 handler:(id /* block */)a4;

@end
