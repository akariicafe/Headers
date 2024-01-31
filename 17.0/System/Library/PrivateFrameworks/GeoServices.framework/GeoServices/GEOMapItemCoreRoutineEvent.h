@class GEOAddressObject, NSString, NSDictionary, GEOMapItemClientAttributes, NSDate, GEOPlace;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {
    NSDictionary *_addressDictionary;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    NSString *_eventName;
    NSString *_eventTitle;
    NSDate *_eventDate;
    BOOL _eventIsAllDay;
    struct { double latitude; double longitude; } _coordinate;
    GEOAddressObject *_addressObject;
}

- (id)addressObject;
- (id)eventName;
- (id)geoAddress;
- (BOOL)_responseStatusIsIncomplete;
- (id)weatherDisplayName;
- (BOOL)isEventAllDay;
- (BOOL)_hasResolvablePartialInformation;
- (id)_clientAttributes;
- (id)_place;
- (id)addressDictionary;
- (struct { double x0; double x1; })coordinate;
- (id)eventDate;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)name;
- (id)initWithAddressDictionary:(id)a0 eventName:(id)a1 eventTitle:(id)a2 eventDate:(id)a3 eventIsAllDay:(BOOL)a4 coordinate:(struct { double x0; double x1; })a5 clientAttributes:(id)a6;

@end
