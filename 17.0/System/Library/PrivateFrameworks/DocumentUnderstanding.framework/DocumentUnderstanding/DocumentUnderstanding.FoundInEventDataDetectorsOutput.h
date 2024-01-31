@class NSTimeZone, NSString, NSDictionary, NSURL, NSDateComponents;

@interface DocumentUnderstanding.FoundInEventDataDetectorsOutput : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ detectedDate;
    void /* unknown type, empty encoding */ detectedTimeZone;
    void /* unknown type, empty encoding */ detectedEndDate;
    void /* unknown type, empty encoding */ detectedEndTimeZone;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ trackingNumber;
    void /* unknown type, empty encoding */ carrier;
    void /* unknown type, empty encoding */ flightNumber;
    void /* unknown type, empty encoding */ flightAirline;
    void /* unknown type, empty encoding */ phoneNumber;
    void /* unknown type, empty encoding */ phoneNumberLabel;
    void /* unknown type, empty encoding */ emailAddress;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ addressComponents;
    void /* unknown type, empty encoding */ text;
}

@property (nonatomic, copy) NSDateComponents *detectedDate;
@property (nonatomic, copy) NSTimeZone *detectedTimeZone;
@property (nonatomic, copy) NSDateComponents *detectedEndDate;
@property (nonatomic, copy) NSTimeZone *detectedEndTimeZone;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *trackingNumber;
@property (nonatomic, copy) NSString *carrier;
@property (nonatomic, copy) NSString *flightNumber;
@property (nonatomic, copy) NSString *flightAirline;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *phoneNumberLabel;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSDictionary *addressComponents;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) void /* unknown type, empty encoding */ start;
@property (nonatomic) void /* unknown type, empty encoding */ len;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
