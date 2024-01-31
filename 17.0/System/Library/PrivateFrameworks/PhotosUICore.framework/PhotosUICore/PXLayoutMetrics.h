@class NSString;

@interface PXLayoutMetrics : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
