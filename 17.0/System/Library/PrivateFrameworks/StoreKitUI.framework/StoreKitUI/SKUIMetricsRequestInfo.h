@class NSDictionary;

@interface SKUIMetricsRequestInfo : NSObject <NSCopying>

@property (nonatomic) BOOL hasResponseWasCachedValue;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) BOOL responseWasCached;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReportRequestTimesMessagePayload:(id)a0;

@end
