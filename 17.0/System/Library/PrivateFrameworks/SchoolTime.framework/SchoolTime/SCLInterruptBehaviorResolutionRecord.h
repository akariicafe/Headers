@class SCLInterruptEventBehavior, NSUUID, NSString, NSDate;

@interface SCLInterruptBehaviorResolutionRecord : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) SCLInterruptEventBehavior *eventBehavior;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;

+ (id)resolutionRecordForDate:(id)a0 eventBehavior:(id)a1 clientIdentifier:(id)a2;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithUUID:(id)a0 date:(id)a1 eventBehavior:(id)a2 clientIdentifier:(id)a3;

@end
