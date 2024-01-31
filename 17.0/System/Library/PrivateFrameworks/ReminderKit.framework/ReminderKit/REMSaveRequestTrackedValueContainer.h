@protocol REMSaveRequestTrackedValue;

@interface REMSaveRequestTrackedValueContainer : NSObject

@property (weak, nonatomic) id<REMSaveRequestTrackedValue> weakValue;
@property (retain, nonatomic) id<REMSaveRequestTrackedValue> template;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)valueForSaveRequest:(id)a0;
- (id)valueWithoutPerformingCopy;

@end
