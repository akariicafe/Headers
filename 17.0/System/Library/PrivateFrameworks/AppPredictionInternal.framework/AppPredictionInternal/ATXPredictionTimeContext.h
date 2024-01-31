@class NSDate;

@interface ATXPredictionTimeContext : ATXPredictionContextDomain {
    double _absoluteDate;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int dayOfWeek;
@property (readonly, nonatomic) int timeOfDay;
@property (readonly, nonatomic) BOOL dateInWeekend;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (BOOL)isEqualToATXPredictionTimeContext:(id)a0;
- (void)setDate:(id)a0;
- (id)description;
- (id)initWithDate:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
