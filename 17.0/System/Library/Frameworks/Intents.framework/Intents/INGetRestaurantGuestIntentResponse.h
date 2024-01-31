@class INRestaurantGuest, INRestaurantGuestDisplayPreferences, NSString;

@interface INGetRestaurantGuestIntentResponse : INIntentResponse <INImageProxyInjecting, INGetRestaurantGuestIntentResponseExport>

@property (copy, nonatomic) INRestaurantGuest *guest;
@property (copy, nonatomic) INRestaurantGuestDisplayPreferences *guestDisplayPreferences;
@property (readonly, nonatomic) long long code;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentation;
- (id)initWithBackingStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
