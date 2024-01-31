@class NSString;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCRacingWheelProductInformation : NSObject <GCRacingWheelProductInfo>

@property (copy, nonatomic) NSString *productCategory;
@property (copy, nonatomic) NSString *vendorName;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)capture;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)setDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
