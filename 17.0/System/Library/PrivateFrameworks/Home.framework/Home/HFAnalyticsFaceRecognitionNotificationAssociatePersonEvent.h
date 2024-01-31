@class NSNumber;

@interface HFAnalyticsFaceRecognitionNotificationAssociatePersonEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *unknownPersonsTagCount;
@property (retain, nonatomic) NSNumber *openURLSuccess;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
