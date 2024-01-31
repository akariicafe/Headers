@class SFPunchout, NSString, NSArray, NSDictionary, NSData;

@interface SFUserReportRequest : NSObject <SFUserReportRequest, NSSecureCoding, NSCopying> {
    struct { unsigned char reportType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *affordanceText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *dismissText;
@property (copy, nonatomic) NSArray *userReportOptions;
@property (nonatomic) int reportType;
@property (copy, nonatomic) NSString *reportOptionsSectionTitle;
@property (copy, nonatomic) NSString *disclaimerText;
@property (retain, nonatomic) SFPunchout *disclaimerLearnMorePunchout;
@property (copy, nonatomic) NSString *attachmentSectionTitle;
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
- (BOOL)hasReportType;

@end
