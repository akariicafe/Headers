@class NSString, NSURL;

@interface AAAccountBeneficiaryManagementViewModel : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *myBeneficiariesGroupTitle;
@property (readonly, copy, nonatomic) NSString *myBeneficiariesAdd;
@property (readonly, copy, nonatomic) NSString *myBeneficiariesGroupFooter;
@property (readonly, copy, nonatomic) NSString *beneficiaryForGroupTitle;
@property (readonly, copy, nonatomic) NSString *learnMore;
@property (readonly, copy, nonatomic) NSURL *learnMoreURL;
@property (readonly, copy, nonatomic) NSString *noBenefactorFooter;

@end
