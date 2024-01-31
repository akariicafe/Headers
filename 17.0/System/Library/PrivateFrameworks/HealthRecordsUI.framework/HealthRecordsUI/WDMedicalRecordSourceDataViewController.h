@class HRProfile, UITextView, HKMedicalRecord, UIBarButtonItem;

@interface WDMedicalRecordSourceDataViewController : HKViewController

@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord;
@property (readonly, nonatomic) HRProfile *profile;
@property (readonly, nonatomic) UITextView *sourceView;
@property (nonatomic) BOOL hasFetchedSourceString;
@property (retain, nonatomic) UIBarButtonItem *shareItem;

- (void)selectAll:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)share:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)_tapToRadar:(id)a0;
- (void)_fetchAndDisplaySourceStringIfNecessary;
- (void)displaySourceString:(id)a0;
- (id)initWithProfile:(id)a0 medicalRecord:(id)a1;

@end
