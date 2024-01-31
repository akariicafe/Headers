@class NSArray, NSSet, NSDictionary, NSError, NSString;

@interface TBErrorFetchResponse : NSObject <TBFetchResponse>

@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSSet *tiles;
@property (readonly, nonatomic) NSDictionary *resultsByBSSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteResponseWithError:(id)a0;
+ (id)responseWithError:(id)a0;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;

@end
