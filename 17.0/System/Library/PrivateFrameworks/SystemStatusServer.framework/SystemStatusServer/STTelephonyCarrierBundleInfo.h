@class NSString, NSArray;

@interface STTelephonyCarrierBundleInfo : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (readonly, nonatomic) BOOL LTEConnectionShows4G;
@property (readonly, nonatomic) BOOL suppressSOSOnlyWithLimitedService;
@property (readonly, nonatomic, getter=isReinitiatingActivationDisabled) BOOL reinitiatingActivationDisabled;
@property (readonly, copy, nonatomic) NSString *customerServicePhoneNumber;
@property (readonly, copy, nonatomic) NSArray *disabledApplicationIDs;
@property (readonly, copy, nonatomic) NSString *carrierName;
@property (readonly, copy, nonatomic) NSString *homeCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
