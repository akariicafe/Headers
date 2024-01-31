@class NSError, HMSetupAccessoryPayload;

@interface HFSetupAccessoryResult : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) HMSetupAccessoryPayload *setupPayload;
@property (readonly, nonatomic) BOOL hasAddRequest;
@property (readonly, nonatomic) BOOL isValidForPairing;

- (id)initWithPayload:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSetupCode:(id)a0;
- (id)initWithPayload:(id)a0 error:(id)a1 hasAddRequest:(BOOL)a2;
- (id)initWithPayload:(id)a0 hasAddRequest:(BOOL)a1;
- (id)initWithSetupURL:(id)a0;
- (BOOL)isAllZerosCode;

@end
