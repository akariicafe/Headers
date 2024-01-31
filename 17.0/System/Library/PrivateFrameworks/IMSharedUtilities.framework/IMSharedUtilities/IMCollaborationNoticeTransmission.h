@class NSString, NSData, NSDate;

@interface IMCollaborationNoticeTransmission : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *guidString;
@property (readonly, nonatomic) NSData *eventData;
@property (readonly, nonatomic) long long eventType;
@property (readonly, copy, nonatomic) NSDate *date;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEventData:(id)a0 eventType:(long long)a1 guidString:(id)a2 date:(id)a3;

@end
