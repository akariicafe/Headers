@class HKSample, NSString, HKHealthStore;

@interface HKDataMetadataReportSection : HKDataMetadataSection

@property (readonly, nonatomic) HKSample *sample;
@property (readonly, nonatomic) NSString *detailedReportName;
@property (readonly, nonatomic) HKHealthStore *healthStore;

- (void).cxx_destruct;
- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (id)documentImageForXMLFiles;
- (id)initWithSample:(id)a0 healthStore:(id)a1;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;

@end
