@class NSString;

@interface DKNotableUserDataCellularPlan : NSObject

@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic) BOOL isTransferred;

- (void).cxx_destruct;
- (id)initWithCarrierName:(id)a0 phoneNumber:(id)a1 isTransferred:(BOOL)a2;

@end
