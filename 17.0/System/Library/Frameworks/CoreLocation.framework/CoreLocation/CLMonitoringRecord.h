@class NSString, CLCondition, CLMonitoringEvent;

@interface CLMonitoringRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) CLCondition *constraint;
@property (readonly) CLCondition *condition;
@property (readonly) CLMonitoringEvent *lastEvent;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initRecordWithMonitoringRecord:(id)a0;
- (id)initRecordWithCondition:(id)a0 identifier:(id)a1;
- (id)initRecordWithCondition:(id)a0 identifier:(id)a1 options:(unsigned long long)a2;
- (id)initRecordWithCondition:(id)a0 identifier:(id)a1 options:(unsigned long long)a2 initialState:(unsigned long long)a3;
- (id)initRecordWithCondition:(id)a0 options:(unsigned long long)a1 event:(id)a2;
- (void)updateEvent:(id)a0;

@end
