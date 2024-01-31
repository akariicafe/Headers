@class NSString, INAirline, INAirportGate, INDateComponentsRange;

@interface INFlight : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INAirline *airline;
@property (readonly, copy, nonatomic) NSString *flightNumber;
@property (readonly, copy, nonatomic) INDateComponentsRange *boardingTime;
@property (readonly, copy, nonatomic) INDateComponentsRange *flightDuration;
@property (readonly, copy, nonatomic) INAirportGate *departureAirportGate;
@property (readonly, copy, nonatomic) INAirportGate *arrivalAirportGate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAirline:(id)a0 flightNumber:(id)a1 boardingTime:(id)a2 flightDuration:(id)a3 departureAirportGate:(id)a4 arrivalAirportGate:(id)a5;

@end
