@class NSString, NSDictionary, NSData, SFStructuredLocation, NSDate;

@interface SFCalendarEvent : NSObject <SFCalendarEvent, NSSecureCoding, NSCopying> {
    struct { unsigned char isAllDay : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL isAllDay;
@property (retain, nonatomic) SFStructuredLocation *location;
@property (copy, nonatomic) NSString *notes;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasIsAllDay;

@end
