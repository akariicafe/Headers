@class NSString, NSDate;

@interface FCCNotificationSuppressionRequest : NSObject <FCCDataSerializable>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (id)transportData;
- (id)initWithTransportData:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 expirationDate:(id)a1;

@end
