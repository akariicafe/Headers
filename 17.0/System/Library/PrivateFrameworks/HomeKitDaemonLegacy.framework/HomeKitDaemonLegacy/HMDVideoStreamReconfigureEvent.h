@class NSDate;

@interface HMDVideoStreamReconfigureEvent : HMFObject

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSDate *timestamp;

- (unsigned long long)hash;
- (id)initWithEventType:(unsigned long long)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
