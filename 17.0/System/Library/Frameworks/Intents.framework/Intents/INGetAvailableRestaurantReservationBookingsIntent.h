@class NSNumber, NSString, NSDateComponents, INRestaurant, NSDate;

@interface INGetAvailableRestaurantReservationBookingsIntent : INIntent <INGetAvailableRestaurantReservationBookingsIntentExport, NSCopying>

@property (retain, nonatomic) NSDate *preferredBookingDate;
@property (copy, nonatomic) INRestaurant *restaurant;
@property (nonatomic) unsigned long long partySize;
@property (copy, nonatomic) NSDateComponents *preferredBookingDateComponents;
@property (copy, nonatomic) NSNumber *maximumNumberOfResults;
@property (copy, nonatomic) NSDate *earliestBookingDateForResults;
@property (copy, nonatomic) NSDate *latestBookingDateForResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)intentDescription;
+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRestaurant:(id)a0 partySize:(unsigned long long)a1 preferredBookingDateComponents:(id)a2 maximumNumberOfResults:(id)a3 earliestBookingDateForResults:(id)a4 latestBookingDateForResults:(id)a5;

@end
