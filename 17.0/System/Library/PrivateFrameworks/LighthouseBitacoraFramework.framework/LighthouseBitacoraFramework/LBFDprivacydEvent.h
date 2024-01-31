@class NSString, NSNumber;

@interface LBFDprivacydEvent : NSObject

@property (readonly, nonatomic) int eventPhase;
@property (readonly, nonatomic) NSString *eventUUID;
@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSString *errorMessage;

- (void).cxx_destruct;
- (id)initWithEventPhase:(int)a0 eventUUID:(id)a1 succeeded:(BOOL)a2 error:(id)a3;

@end
