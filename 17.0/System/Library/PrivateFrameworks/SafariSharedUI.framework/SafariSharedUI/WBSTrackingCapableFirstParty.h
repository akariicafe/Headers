@class NSString;

@interface WBSTrackingCapableFirstParty : NSObject

@property (readonly, copy, nonatomic) NSString *domain;

- (id)initWithDomain:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
