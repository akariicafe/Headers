@class NSString, NSArray, NSURL, HKClinicalBrand;

@interface HKClinicalProvider : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSURL *informationURL;
@property (readonly, copy, nonatomic) HKClinicalBrand *brand;
@property (readonly, copy, nonatomic) NSArray *gateways;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExternalID:(id)a0 title:(id)a1 subtitle:(id)a2 location:(id)a3 informationURL:(id)a4 brand:(id)a5 gateways:(id)a6;

@end
