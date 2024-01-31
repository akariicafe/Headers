@class NSString;

@interface ProximityReader.MobileDriversLicenseReadRequestInternal : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ retainedElements;
    void /* unknown type, empty encoding */ nonRetainedElements;
    void /* unknown type, empty encoding */ hostPreferredLocaleIdentifier;
    void /* unknown type, empty encoding */ sessionIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
