@class NSError, NSString, NSDictionary;

@interface DUFoundInEventClientAbstractResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL detectedEventPolarity;
@property (readonly, nonatomic) NSError *reservationIdError;
@property (readonly, nonatomic) NSString *reservationId;
@property (readonly, nonatomic) NSError *reservationNameError;
@property (readonly, nonatomic) NSString *reservationName;
@property (readonly, nonatomic) NSError *startAddressError;
@property (readonly, nonatomic) NSString *startAddress;
@property (readonly, nonatomic) NSDictionary *startAddressComponents;
@property (readonly, nonatomic) NSError *endAddressError;
@property (readonly, nonatomic) NSString *endAddress;
@property (readonly, nonatomic) NSDictionary *endAddressComponents;
@property (readonly, nonatomic) NSError *startPlaceError;
@property (readonly, nonatomic) NSString *startPlace;
@property (readonly, nonatomic) NSError *endPlaceError;
@property (readonly, nonatomic) NSString *endPlace;
@property (readonly, nonatomic) NSError *startDateError;
@property (readonly, nonatomic) NSString *startDate;
@property (readonly, nonatomic) NSError *endDateError;
@property (readonly, nonatomic) NSString *endDate;
@property (readonly, nonatomic) NSError *hotelNameError;
@property (readonly, nonatomic) NSString *hotelName;
@property (readonly, nonatomic) NSError *guestNameError;
@property (readonly, nonatomic) NSString *guestName;
@property (readonly, nonatomic) NSError *movieNameError;
@property (readonly, nonatomic) NSString *movieName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFields:(BOOL)a0 reservationIdError:(id)a1 reservationId:(id)a2 reservationNameError:(id)a3 reservationName:(id)a4 startAddressError:(id)a5 startAddress:(id)a6 startAddressComponents:(id)a7 endAddressError:(id)a8 endAddress:(id)a9 endAddressComponents:(id)a10 startPlaceError:(id)a11 startPlace:(id)a12 endPlaceError:(id)a13 endPlace:(id)a14 startDateError:(id)a15 startDate:(id)a16 endDateError:(id)a17 endDate:(id)a18 hotelNameError:(id)a19 hotelName:(id)a20 guestNameError:(id)a21 guestName:(id)a22 movieNameError:(id)a23 movieName:(id)a24;

@end
