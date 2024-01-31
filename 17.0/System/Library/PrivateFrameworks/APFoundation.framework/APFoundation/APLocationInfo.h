@class NSString;

@interface APLocationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *locality;
@property (retain) NSString *administrativeArea;
@property (retain) NSString *subAdministrativeArea;
@property (retain) NSString *isoCountryCode;
@property (retain) NSString *postalCode;

- (id)jsonRepresentationWithOptions:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEmpty;

@end
