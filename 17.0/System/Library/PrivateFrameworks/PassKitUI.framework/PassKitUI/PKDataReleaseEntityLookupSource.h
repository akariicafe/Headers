@class NSString;

@interface PKDataReleaseEntityLookupSource : NSObject <PKMerchantLookupRequestSource> {
    NSString *_entity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mapsURL;
- (BOOL)isSettlement;
- (BOOL)isRefund;
- (id)identifier;
- (void).cxx_destruct;
- (long long)type;
- (id)mapsMerchantLookupRequest;
- (id)initWithEntityIdentifier:(id)a0;

@end
