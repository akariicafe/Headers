@class NSString;

@interface _UIFocusScrollOffsetResolverContinuous : NSObject <_UIFocusScrollOffsetResolver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })contentOffsetForScrollRequest:(id)a0;
- (unsigned long long)scrollOffsetResolverType;

@end
