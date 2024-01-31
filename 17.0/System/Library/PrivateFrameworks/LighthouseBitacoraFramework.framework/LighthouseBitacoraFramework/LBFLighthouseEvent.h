@class NSNumber, NSString;

@interface LBFLighthouseEvent : NSObject

@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) long long eventType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPerformTaskStatus:(BOOL)a0 error:(id)a1;
- (id)initWithPerformTrialTaskStatus:(BOOL)a0 error:(id)a1;
- (id)initWithStop:(BOOL)a0 error:(id)a1;

@end
