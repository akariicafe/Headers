@class NSDictionary;

@interface SUUIMetricsDOMChange : NSObject <NSCopying>

@property (nonatomic) double buildStartTime;
@property (nonatomic) double buildEndTime;
@property (nonatomic) double renderStartTime;
@property (nonatomic) double renderEndTime;
@property (nonatomic, getter=isFromDeferredMessage) BOOL fromDeferredMessage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReportDomBuildTimesMessagePayload:(id)a0;

@end
