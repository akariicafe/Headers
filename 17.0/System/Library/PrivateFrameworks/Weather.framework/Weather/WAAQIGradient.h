@class NSMutableDictionary, NSMutableIndexSet, NSArray, NSMutableArray;

@interface WAAQIGradient : NSObject

@property (retain, nonatomic) NSMutableArray *internalStops;
@property (readonly, nonatomic) NSMutableIndexSet *locationStops;
@property (readonly, nonatomic) NSMutableDictionary *colorsByLocation;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, copy, nonatomic) NSArray *stops;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (void)addGradientStop:(id)a0;
- (id)gradientStopForLocation:(unsigned long long)a0;

@end
