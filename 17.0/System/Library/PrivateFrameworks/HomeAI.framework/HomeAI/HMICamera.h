@class NSUUID, NSString;

@interface HMICamera : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *name;
@property (readonly) BOOL hasBattery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 manufacturer:(id)a2 model:(id)a3 firmwareVersion:(id)a4 hasBattery:(BOOL)a5;
- (id)initWithIdentifier:(id)a0 name:(id)a1 manufacturer:(id)a2 model:(id)a3;
- (id)initWithIdentifier:(id)a0 name:(id)a1 manufacturer:(id)a2 model:(id)a3 firmwareVersion:(id)a4;

@end
