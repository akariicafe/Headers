@class NSString, NSArray;

@interface _WKResourceLoadStatisticsThirdParty : NSObject <WKObject> {
    struct ObjectStorage<API::ResourceLoadStatisticsThirdParty> { struct type { unsigned char __lx[40]; } data; } _thirdParty;
}

@property (readonly, nonatomic) NSString *thirdPartyDomain;
@property (readonly, nonatomic) NSArray *underFirstParties;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
