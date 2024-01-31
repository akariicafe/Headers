@class NSString;

@interface CADisplayModeCriteria : NSObject {
    struct CADisplayModeCriteriaPriv { struct CGSize { double x0; double x1; } x0; double x1; int x2; } *_priv;
}

@property struct CGSize { double x0; double x1; } resolution;
@property double refreshRate;
@property (copy) NSString *hdrMode;

- (id)init;
- (void)dealloc;

@end
