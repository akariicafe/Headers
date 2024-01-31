@class NSString;

@interface MPRadioStation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *stationStringID;
@property (nonatomic) long long uniqueIdentifier;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *localizedDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModelStation:(id)a0;
- (id)initWithPlayParameters:(id)a0;
- (id)initWithStation:(id)a0;

@end
