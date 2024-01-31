@class NSSet, PDSRequestInfo;

@interface PDSRequest : NSObject

@property (readonly, nonatomic) NSSet *entries;
@property (retain, nonatomic) PDSRequestInfo *requestInfo;

- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEntries:(id)a0 requestInfo:(id)a1;

@end
