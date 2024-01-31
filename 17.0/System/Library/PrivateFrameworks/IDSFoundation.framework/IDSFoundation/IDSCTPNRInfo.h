@class NSString;

@interface IDSCTPNRInfo : NSObject

@property (retain, nonatomic) NSString *PLMN;
@property (retain, nonatomic) NSString *IMSI;
@property (retain, nonatomic) NSString *PNRPhoneNumber;
@property (retain, nonatomic) NSString *phoneBookNumber;

- (void).cxx_destruct;
- (id)initWithIMSI:(id)a0 PLMN:(id)a1 PNRPhoneNumber:(id)a2 phoneBookNumber:(id)a3;

@end
