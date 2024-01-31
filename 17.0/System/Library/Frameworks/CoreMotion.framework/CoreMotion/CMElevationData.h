@class NSString, NSUUID, NSDate;

@interface CMElevationData : NSObject <SRSampling, NSSecureCoding, NSCopying> {
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    unsigned long long fElevationAscended;
    unsigned long long fElevationDescended;
    long long fSource;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long recordId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long elevationAscended;
@property (readonly, nonatomic) unsigned long long elevationDescended;

+ (id)sourceName:(long long)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithSignificantElevationSample:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 elevationAscended:(unsigned long long)a2 elevationDescended:(unsigned long long)a3 source:(long long)a4 recordId:(unsigned long long)a5 sourceId:(id)a6;

@end
