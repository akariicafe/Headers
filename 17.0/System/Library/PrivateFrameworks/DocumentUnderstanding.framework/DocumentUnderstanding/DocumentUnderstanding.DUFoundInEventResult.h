@class NSString, NSDictionary;

@interface DocumentUnderstanding.DUFoundInEventResult : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ reservationId;
    void /* unknown type, empty encoding */ reservationName;
    void /* unknown type, empty encoding */ hotelName;
    void /* unknown type, empty encoding */ guestName;
    void /* unknown type, empty encoding */ movieName;
    void /* unknown type, empty encoding */ startAddress;
    void /* unknown type, empty encoding */ startAddressComponents;
    void /* unknown type, empty encoding */ endAddress;
    void /* unknown type, empty encoding */ endAddressComponents;
    void /* unknown type, empty encoding */ startPlace;
    void /* unknown type, empty encoding */ endPlace;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
}

@property (nonatomic) void /* unknown type, empty encoding */ detectedEventPolarity;
@property (nonatomic, retain) void /* unknown type, empty encoding */ reservationIdError;
@property (nonatomic, copy) NSString *reservationId;
@property (nonatomic, retain) void /* unknown type, empty encoding */ reservationNameError;
@property (nonatomic, copy) NSString *reservationName;
@property (nonatomic, retain) void /* unknown type, empty encoding */ hotelNameError;
@property (nonatomic, copy) NSString *hotelName;
@property (nonatomic, retain) void /* unknown type, empty encoding */ guestNameError;
@property (nonatomic, copy) NSString *guestName;
@property (nonatomic, retain) void /* unknown type, empty encoding */ movieNameError;
@property (nonatomic, copy) NSString *movieName;
@property (nonatomic, retain) void /* unknown type, empty encoding */ startAddressError;
@property (nonatomic, copy) NSString *startAddress;
@property (nonatomic, copy) NSDictionary *startAddressComponents;
@property (nonatomic, retain) void /* unknown type, empty encoding */ endAddressError;
@property (nonatomic, copy) NSString *endAddress;
@property (nonatomic, copy) NSDictionary *endAddressComponents;
@property (nonatomic, retain) void /* unknown type, empty encoding */ startPlaceError;
@property (nonatomic, copy) NSString *startPlace;
@property (nonatomic, retain) void /* unknown type, empty encoding */ endPlaceError;
@property (nonatomic, copy) NSString *endPlace;
@property (nonatomic, retain) void /* unknown type, empty encoding */ startDateError;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ endDateError;
@property (nonatomic, copy) NSString *endDate;

+ (id)getErrorForFieldWithField:(id)a0 errorCode:(long long)a1;
+ (id)mapErrorCodeToUserInfoWithFieldName:(id)a0 errorCode:(long long)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)serializedData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithFoundInEventResult:(id)a0;

@end
