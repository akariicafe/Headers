@class NSDate;

@interface SMFenceInfo : NSObject

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double fenceRadius;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 fenceRadius:(double)a1;

@end
