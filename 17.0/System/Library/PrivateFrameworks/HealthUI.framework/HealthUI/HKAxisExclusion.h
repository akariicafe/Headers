@class NSString, NSMutableArray;

@interface HKAxisExclusion : NSObject <HKGraphRendererExclusion>

@property (retain, nonatomic) NSMutableArray *excludedRects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)excludeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
