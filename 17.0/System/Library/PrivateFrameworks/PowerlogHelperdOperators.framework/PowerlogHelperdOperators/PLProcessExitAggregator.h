@interface PLProcessExitAggregator : NSObject <NSCopying>

@property unsigned int labelIdx;
@property unsigned int lastTTR;
@property unsigned char exitReasonNamespace;
@property unsigned long long exitReasonCode;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
