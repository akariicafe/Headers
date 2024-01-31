@class NSString;

@interface DDMatchPhoneNumber : DDMatch

@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithDDScannerResult:(id)a0;

@end
