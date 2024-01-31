@class NSString, NSData;

@interface SBKPullValueResponse : SBKResponse

@property (readonly, nonatomic) NSString *itemKey;
@property (readonly, nonatomic) NSString *itemVersion;
@property (readonly, nonatomic) NSData *itemValuePayload;
@property (readonly, nonatomic) NSString *domainVersion;

+ (id)responseWithResponse:(id)a0 transaction:(id)a1;

- (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(id)a0;

@end
