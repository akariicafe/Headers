@class NSString, _TtC18ActivityUIServices19ActivityAlertClient;
@protocol ACUISActivityAlertClientDelegate;

@interface ACUISActivityAlertClient : NSObject <ActivityUIServices.ActivityAlertClientDelegate>

@property (retain, nonatomic) _TtC18ActivityUIServices19ActivityAlertClient *alertClient;
@property (weak, nonatomic) id<ACUISActivityAlertClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
