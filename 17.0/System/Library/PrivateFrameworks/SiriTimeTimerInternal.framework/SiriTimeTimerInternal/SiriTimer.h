@class NSString, NSDate, NSNumber, SiriDevice;

@interface SiriTimer : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic) long long state;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSNumber *remainingTime;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) SiriDevice *device;
@property (nonatomic, retain) NSNumber *shouldMatchAny;
@property (nonatomic, retain) NSNumber *shouldMatchRemote;
@property (nonatomic, copy) NSDate *fireDate;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
