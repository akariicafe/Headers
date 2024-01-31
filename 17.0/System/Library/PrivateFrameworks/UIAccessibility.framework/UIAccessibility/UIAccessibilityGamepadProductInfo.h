@class NSUUID, NSString, NSDictionary, NSNumber, GCController;

@interface UIAccessibilityGamepadProductInfo : NSObject <GCControllerProductInfo>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *productCategory;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly, copy, nonatomic, getter=isAttachedToDevice) NSNumber *attachedToDevice;
@property (retain, nonatomic) GCController *accessibilityController;
@property (copy, nonatomic) NSDictionary *miscellaneous;
@property (readonly, copy) NSString *detailedProductCategory;
@property (readonly, copy) NSString *anonymizedIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setController:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
