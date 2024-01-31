@class NSString, NSDictionary, NSData, SFColor;

@interface SFCalendarColor : SFColor <SFCalendarColor, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) double redComponent;
@property (nonatomic) double greenComponent;
@property (nonatomic) double blueComponent;
@property (nonatomic) double alphaComponent;
@property (nonatomic) int colorTintStyle;
@property (retain, nonatomic) SFColor *darkModeColor;
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

@end
