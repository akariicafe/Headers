@class NSString;

@interface FCCCoalescingRule : NSObject <FCCDataSerializable>

@property (copy, nonatomic) NSString *eventIdentifier;
@property (nonatomic) double interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transportData;
- (id)initWithTransportData:(id)a0;
- (id)protobuf;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (id)initWithEventIdentifier:(id)a0 interval:(double)a1;

@end
