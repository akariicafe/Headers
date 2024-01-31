@class NSString, _HKMedicalIDData;

@interface HKOrganDonationBaseViewController : HKTitledBuddyViewController

@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSString *completionButtonTitle;
@property (copy, nonatomic) id /* block */ registrationCompletionHandler;

- (void).cxx_destruct;
- (id)initWithMedicalIDData:(id)a0;

@end
