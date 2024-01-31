@class NSString;

@interface ICASReferralData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *referringApplication;
@property (readonly, nonatomic) NSString *referringInboundUrl;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithReferringApplication:(id)a0 referringInboundUrl:(id)a1;

@end
