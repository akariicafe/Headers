@class UIResolvedShape;

@interface UIShapeResolutionContext : NSObject {
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ cachedContentShape;
}

@property (nonatomic, readonly) UIResolvedShape *contentShape;

- (id)init;
- (void).cxx_destruct;

@end
