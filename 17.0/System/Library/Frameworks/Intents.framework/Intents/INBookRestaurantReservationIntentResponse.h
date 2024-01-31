@class NSString, INRestaurantReservationUserBooking;

@interface INBookRestaurantReservationIntentResponse : INIntentResponse <INImageProxyInjecting, INBookRestaurantReservationIntentResponseExport>

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) INRestaurantReservationUserBooking *userBooking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
