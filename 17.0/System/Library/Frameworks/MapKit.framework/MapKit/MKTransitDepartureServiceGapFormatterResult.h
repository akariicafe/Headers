@class NSString;

@interface MKTransitDepartureServiceGapFormatterResult : NSObject

@property (readonly, copy, nonatomic) NSString *format;
@property (readonly, copy, nonatomic) NSString *dateDescription;
@property (readonly, nonatomic) unsigned long long dateFormat;
@property (readonly, nonatomic) NSString *formattedString;

- (void).cxx_destruct;
- (id)initWithFormat:(id)a0 dateDescription:(id)a1 dateFormat:(unsigned long long)a2;

@end
