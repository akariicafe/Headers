@class CNPostalAddress, CLLocation, NSDate;

@interface ASGeoCodeResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CNPostalAddress *address;
@property (readonly) CLLocation *location;
@property (readonly) NSDate *updated;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAddress:(id)a0 location:(id)a1 updated:(id)a2;

@end
