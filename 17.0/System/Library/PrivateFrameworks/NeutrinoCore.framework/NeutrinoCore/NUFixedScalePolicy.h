@class NSString;

@interface NUFixedScalePolicy : NSObject <NUScalePolicy>

@property (readonly) struct { long long numerator; long long denominator; } scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)oneToOneScalePolicy;

- (id)initWithScale:(struct { long long x0; long long x1; })a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; long long x1; })scaleForImageSize:(struct { long long x0; long long x1; })a0;

@end
