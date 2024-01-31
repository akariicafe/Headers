@class NSString;

@interface _SFToken : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithText:(id)a0 confidence:(double)a1 startTime:(double)a2 duration:(double)a3;

@end
