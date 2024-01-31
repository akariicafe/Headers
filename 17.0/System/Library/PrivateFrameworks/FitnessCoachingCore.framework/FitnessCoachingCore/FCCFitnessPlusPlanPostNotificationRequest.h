@class NSString;

@interface FCCFitnessPlusPlanPostNotificationRequest : NSObject <FCCDataSerializable>

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL force;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transportData;
- (id)initWithTransportData:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (id)initWithType:(id)a0 force:(BOOL)a1;

@end
