@class NSArray, NSString;

@interface CTTransportKeysUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *keys;
@property (retain, nonatomic) NSString *sps_environment;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWith:(id)a0;
- (id)initWith:(id)a0 sps:(id)a1;

@end
