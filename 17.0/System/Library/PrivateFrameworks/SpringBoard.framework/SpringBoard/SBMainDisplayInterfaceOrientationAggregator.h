@class NSArray;
@protocol BSInvalidatable;

@interface SBMainDisplayInterfaceOrientationAggregator : NSObject {
    id<BSInvalidatable> _stateCaptureHandle;
}

@property (readonly, nonatomic) long long activeInterfaceOrientation;
@property (readonly, retain, nonatomic) NSArray *interfaceOrientationSources;

- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)highestActiveInterfaceOrientationSourceIgnoringSourcesAbove:(double)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)activeInterfaceOrientationAtOrBelow:(double)a0;
- (void)_sortSources:(id)a0;
- (long long)activeInterfaceOrientationBelow:(double)a0;
- (id)succinctDescription;
- (long long)_layoutOrientation;
- (id)highestActiveInterfaceOrientationSource;
- (id)_highestSourceAtOrBelow:(double)a0 amongSources:(id)a1;
- (id)highestActiveInterfaceOrientationSourceBelow:(double)a0;

@end
