@class NSArray, SGContactDetail;

@interface SGContactDetailsHolder : NSObject

@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSArray *postalAddresses;
@property (retain, nonatomic) NSArray *phoneNumbers;
@property (retain, nonatomic) NSArray *instantMessageAddresses;
@property (retain, nonatomic) NSArray *socialProfiles;
@property (retain, nonatomic) SGContactDetail *birthday;
@property (retain, nonatomic) SGContactDetail *photoPath;

- (void).cxx_destruct;

@end
