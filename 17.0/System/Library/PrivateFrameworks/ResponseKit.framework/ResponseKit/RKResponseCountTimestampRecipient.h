@class NSDate;

@interface RKResponseCountTimestampRecipient : NSObject

@property int count;
@property (retain) NSDate *timestamp;
@property BOOL hasSameRecipient;

- (void).cxx_destruct;
- (id)initWithCount:(int)a0 timestamp:(id)a1 hasSameRecipient:(BOOL)a2;

@end
