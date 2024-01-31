@class NSString, NSNumber;

@interface HFAnalyticsHiddenBannerEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *hiddenBannerItemClassName;
@property (retain, nonatomic) NSString *tappedBannerItemClassName;
@property (retain, nonatomic) NSNumber *hiddenBannerCount;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
