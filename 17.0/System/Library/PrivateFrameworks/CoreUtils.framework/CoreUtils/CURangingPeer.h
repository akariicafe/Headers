@class NSData, NSString;

@interface CURangingPeer : NSObject

@property (copy, nonatomic) NSData *deviceAddress;
@property (copy, nonatomic) NSData *deviceIRK;
@property (copy, nonatomic) NSString *deviceModel;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
