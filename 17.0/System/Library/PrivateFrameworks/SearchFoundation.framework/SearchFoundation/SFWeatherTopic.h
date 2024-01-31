@class NSString, SFLatLng;

@interface SFWeatherTopic : SFQueryTopic <SFWeatherTopic>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SFLatLng *location;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) int queryType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQuery:(id)a0 location:(id)a1;
- (id)initWithQuery:(id)a0 location:(id)a1 identifier:(id)a2;

@end
