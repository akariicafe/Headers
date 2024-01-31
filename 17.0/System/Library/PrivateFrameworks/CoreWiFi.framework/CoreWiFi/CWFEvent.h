@class CWFEventID, NSUUID, NSDictionary, NSDate;

@interface CWFEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CWFEventID *eventID;
@property (nonatomic) unsigned long long acknowledgementTimeout;
@property (copy, nonatomic) id /* block */ acknowledge;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSDictionary *info;

- (void)setType:(long long)a0;
- (id)JSONCompatibleKeyValueMap;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToEvent:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
