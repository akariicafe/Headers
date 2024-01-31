@class NSString, NSArray, NSNumber;
@protocol NFConnectionHandoverTransportServiceValue;

@interface NFConnectionHandoverSelect : NSObject <NSCopying>

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *applicationLabel;
@property (retain, nonatomic) NSArray *transportServiceList;
@property (retain, nonatomic) id<NFConnectionHandoverTransportServiceValue> userInfo;
@property (retain, nonatomic) NSNumber *retryInMS;
@property (retain, nonatomic) NSNumber *retryRandom;

+ (id)selectWithRetry:(double)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encode;
- (id)_encodeRetryError;
- (id)_encodeSelect;
- (id)initWithVersion:(id)a0 applicationLabel:(id)a1 serivceList:(id)a2;
- (id)initWithVersion:(id)a0 applicationLabel:(id)a1 serivceList:(id)a2 userInfo:(id)a3;
- (id)initWithVersion:(id)a0 applicationLabel:(id)a1 serviceList:(id)a2 userInfo:(id)a3;
- (id)initWithVersion:(id)a0 applicationLabel:(id)a1 serviceList:(id)a2 userInfo:(id)a3 retryInMS:(id)a4 retryRandom:(id)a5;

@end
