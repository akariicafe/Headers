@class NSString, NSPointerArray;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {
    NSPointerArray *_backdrops;
}

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupNamespace;
@property (nonatomic) double scale;
@property (nonatomic) double minimumScale;
@property (nonatomic) BOOL disableInPlaceFiltering;

- (id)init;
- (long long)indexOfBackdropView:(id)a0;
- (void)addBackdrop:(id)a0 update:(BOOL)a1;
- (BOOL)allowInPlaceFiltering;
- (id)description;
- (void)applyScaleHint:(double)a0;
- (void)updateAllBackdropViews;
- (void).cxx_destruct;
- (void)removeBackdrop:(id)a0 update:(BOOL)a1;
- (id)initWithBackdrop:(id)a0;
- (id)initWithName:(id)a0 scale:(double)a1;

@end
