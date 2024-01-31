@class NSString;

@interface ASLocation : ASItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *annotation;
@property (retain, nonatomic) NSString *street;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *postalCode;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *latitude;
@property (retain, nonatomic) NSString *longitude;
@property (retain, nonatomic) NSString *accuracy;
@property (retain, nonatomic) NSString *altitude;
@property (retain, nonatomic) NSString *altitudeAccuracy;

+ (id)locationWithCalLocation:(void *)a0;

- (id)initWithTitle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToLocation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationData:(id)a0;
- (BOOL)isEmptyLocation;
- (id)initWithCalLocation:(void *)a0;

@end
