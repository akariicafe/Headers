@class NSString, NSURL;

@interface SXImageResource : SXResource <SXImageResource>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dimensions;
@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) BOOL wideColorSpace;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)heightForImageWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFills:(struct CGSize { double x0; double x1; })a0;
- (double)widthForImageHeight:(double)a0;

@end
