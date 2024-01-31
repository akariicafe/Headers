@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterCSRRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *csrNonce;
@property (copy, nonatomic) NSNumber *isForUpdateNOC;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
