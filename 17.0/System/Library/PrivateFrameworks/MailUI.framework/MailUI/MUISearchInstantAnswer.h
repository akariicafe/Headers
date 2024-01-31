@class NSTimeZone, NSString, NSURL, NSDateComponents, NSNumber;

@interface MUISearchInstantAnswer : NSObject {
    NSString *_flightCarrierCode;
    NSDateComponents *_flightDepartureDateComponents;
    NSDateComponents *_flightArrivalDateComponents;
    NSString *_flightArrivalAirportCode;
    NSString *_flightDepartureAirportCode;
    NSString *_flightNumber;
    NSURL *_flightCheckInUrl;
    NSTimeZone *_flightDepartureTimeZone;
    NSTimeZone *_flightArrivalTimeZone;
    NSURL *_flightBookingInfoUrl;
    NSString *_flightCarrier;
    NSString *_flightConfirmationNumber;
    NSString *_flightDepartureAirportTerminal;
    NSString *_flightArrivalAirportTerminal;
    NSString *_flightDepartureAirportGate;
    NSString *_flightArrivalAirportGate;
    NSString *_flightDivertedAirport;
    NSString *_flightStatus;
    NSNumber *_flightInfoIsLive;
    NSString *_hotelReservationId;
    NSString *_hotelUnderName;
    NSDateComponents *_hotelCheckinDateComponents;
    NSDateComponents *_hotelCheckoutDateComponents;
    NSTimeZone *_hotelTimeZone;
    NSString *_hotelReservationForName;
    NSString *_hotelReservationForTelephone;
    NSString *_hotelReservationForAddress;
    NSString *_hotelReservationForAddressLocality;
}

@property (readonly, nonatomic) NSString *flightCarrierCode;
@property (readonly, nonatomic) NSDateComponents *flightDepartureDateComponents;
@property (readonly, nonatomic) NSDateComponents *flightArrivalDateComponents;
@property (readonly, nonatomic) NSString *flightArrivalAirportCode;
@property (readonly, nonatomic) NSString *flightDepartureAirportCode;
@property (readonly, nonatomic) NSString *flightNumber;
@property (readonly, nonatomic) NSURL *flightCheckInUrl;
@property (readonly, nonatomic) NSTimeZone *flightDepartureTimeZone;
@property (readonly, nonatomic) NSTimeZone *flightArrivalTimeZone;
@property (readonly, nonatomic) NSURL *flightBookingInfoUrl;
@property (readonly, nonatomic) NSString *flightCarrier;
@property (readonly, nonatomic) NSString *flightConfirmationNumber;
@property (readonly, nonatomic) NSString *flightDepartureAirportTerminal;
@property (readonly, nonatomic) NSString *flightArrivalAirportTerminal;
@property (readonly, nonatomic) NSString *flightDepartureAirportGate;
@property (readonly, nonatomic) NSString *flightArrivalAirportGate;
@property (readonly, nonatomic) NSString *flightDivertedAirport;
@property (readonly, nonatomic) NSString *flightStatus;
@property (readonly, nonatomic) NSNumber *flightInfoIsLive;
@property (readonly, nonatomic) NSString *hotelReservationId;
@property (readonly, nonatomic) NSString *hotelUnderName;
@property (readonly, nonatomic) NSDateComponents *hotelCheckinDateComponents;
@property (readonly, nonatomic) NSDateComponents *hotelCheckoutDateComponents;
@property (readonly, nonatomic) NSTimeZone *hotelTimeZone;
@property (readonly, nonatomic) NSString *hotelReservationForName;
@property (readonly, nonatomic) NSString *hotelReservationForTelephone;
@property (readonly, nonatomic) NSString *hotelReservationForAddress;
@property (readonly, nonatomic) NSString *hotelReservationForAddressLocality;
@property (readonly, nonatomic) long long instantAnswersKind;
@property (readonly, nonatomic) NSString *messageId;
@property (readonly, nonatomic) NSString *groupId;
@property (readonly, nonatomic) NSString *fallbackGroupId;
@property (readonly, nonatomic) NSString *bodyCardSectionID;
@property (readonly, nonatomic) NSString *buttonsCardSectionID;

- (void).cxx_destruct;
- (id)initFlightAnswerWithCSInstantAnswer:(id)a0;
- (id)initHotelAnswerWithCSInstantAnswer:(id)a0;

@end
