@class LPPointUnit;

@interface LPContactsBadgeStyle : NSObject

@property (retain, nonatomic) LPPointUnit *size;
@property (nonatomic) double margin;
@property (nonatomic) double iconOffset;
@property (nonatomic) long long location;
@property (nonatomic) BOOL useShadow;

- (id)initWithPlatform:(long long)a0;
- (void).cxx_destruct;

@end
