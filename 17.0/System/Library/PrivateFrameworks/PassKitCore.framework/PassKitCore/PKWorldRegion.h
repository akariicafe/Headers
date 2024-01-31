@class NSString;

@interface PKWorldRegion : NSObject <NSSecureCoding> {
    double _latitude;
    double _longitude;
    double _latitudeDelta;
    double _longitudeDelta;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSString *abbreviationCode;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; } displayRegion;
@property (retain, nonatomic) PKWorldRegion *parentRegion;

+ (unsigned long long)mostConstrainingTypeInRegions:(id)a0;

- (id)searchString;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToWorldRegion:(id)a0;
- (BOOL)isIncludedInRegions:(id)a0;
- (id)regionOfType:(unsigned long long)a0;

@end
