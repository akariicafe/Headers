@class NSString, BNBannerSource, PKBannerPresentableRequest;
@protocol PKBannerPresentableProvider;

@interface PKBannerPresentationManager : NSObject <BNBannerSourceDelegate> {
    long long _destination;
    id<PKBannerPresentableProvider> _provider;
    NSString *_requesterIdentifier;
    BNBannerSource *_source;
    PKBannerPresentableRequest *_request;
}

@property (readonly, nonatomic) id provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_managerForDestination:(long long)a0 withProvider:(id)a1;

- (id)init;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)_currentRequest;
- (id)_createPresentableWithConfiguration:(id)a0;
- (void)bannerSourceDidInvalidate:(id)a0;

@end
