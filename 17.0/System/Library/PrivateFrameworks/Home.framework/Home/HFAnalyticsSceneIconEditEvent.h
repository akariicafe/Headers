@class NSNumber, NSString;

@interface HFAnalyticsSceneIconEditEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *didChange;
@property (retain, nonatomic) NSString *colorStr;
@property (retain, nonatomic) NSString *sfSymbolStr;
@property (retain, nonatomic) NSNumber *isNewScene;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
