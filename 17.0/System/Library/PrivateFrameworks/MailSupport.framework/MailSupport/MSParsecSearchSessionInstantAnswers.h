@interface MSParsecSearchSessionInstantAnswers : NSObject

+ (id)log;
+ (id)flightInformationWithAirlineCode:(id)a0 flightNumber:(id)a1 flightDate:(id)a2;
+ (id)dictionaryFromTimezone:(id)a0;
+ (id)formattedDate:(id)a0 withTimezone:(id)a1;
+ (id)sfAirportToDictionnary:(id)a0;
+ (id)sfFlightStatusToString:(int)a0;
+ (id)sfFlightsToDictionary:(id)a0;

@end
