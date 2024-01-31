@class NSString;

@interface NUFitWidthScalePolicy : NSObject <NUScalePolicy> {
    long long _width;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithWidth:(long long)a0;
- (struct { long long x0; long long x1; })scaleForImageSize:(struct { long long x0; long long x1; })a0;

@end
