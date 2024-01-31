@class HKFHIRRequestTaskEndStates, HKFHIRCredentialRefreshResult, NSData, NSError;

@interface HKFHIRResourceDownloadRequestResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *resourceBundleData;
@property (readonly, copy, nonatomic) HKFHIRRequestTaskEndStates *endStates;
@property (readonly, copy, nonatomic) HKFHIRCredentialRefreshResult *refreshResult;
@property (readonly, copy, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithError:(id)a0 endStates:(id)a1 refreshResult:(id)a2;
- (id)initWithResourceBundleData:(id)a0 endStates:(id)a1 refreshResult:(id)a2;

@end
