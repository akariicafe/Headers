@class SKUIImageViewElement, NSString, NSDate;

@interface SKUICounterViewElement : SKUIViewElement

@property (readonly, nonatomic) long long counterType;
@property (readonly, nonatomic) SKUIImageViewElement *backgroundImageElement;
@property (readonly, nonatomic) long long dateFormatType;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double changeRatePerSecond;
@property (readonly, nonatomic) NSString *numberFormat;
@property (readonly, nonatomic) NSDate *startValueDate;
@property (readonly, nonatomic) long long startValue;
@property (readonly, nonatomic) long long stopValue;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (long long)currentNumberValue;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
