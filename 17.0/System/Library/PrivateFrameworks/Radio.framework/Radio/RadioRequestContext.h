@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying>

@property (retain, nonatomic) SSVFairPlaySAPSession *SAPSession;
@property (nonatomic) BOOL usesLocalNetworking;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
