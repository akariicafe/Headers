@class NSArray, UIView;

@interface MUConstraintLayoutInternal : NSObject {
    void /* unknown type, empty encoding */ layoutBuilder;
}

@property (nonatomic, readonly) NSArray *layoutConstraints;
@property (nonatomic, readonly) NSArray *layoutGuides;
@property (nonatomic) long long mode;
@property (nonatomic, weak) UIView *viewForForwardingSetNeedsUpdateConstraints;

- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (void)prepare;
- (void)deactivate;

@end
