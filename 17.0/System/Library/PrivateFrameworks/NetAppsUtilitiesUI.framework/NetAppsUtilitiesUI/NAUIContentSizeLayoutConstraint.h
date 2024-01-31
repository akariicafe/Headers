@class NSString, NAUITextStyleDescriptor;

@interface NAUIContentSizeLayoutConstraint : NSLayoutConstraint {
    id _autoitem;
    id _preferredContentSizeDidChangeObserver;
    BOOL _isConstantUpdatingConstraint;
    NAUITextStyleDescriptor *_dynamicTextStyleDescriptor;
    BOOL _allowsAccessibilityTextStyleSizes;
    double _textStyleDefaultBodyLeading;
}

@property (copy, nonatomic) id /* block */ constantLoadingBlock;
@property (nonatomic) BOOL autoUpdatingConstantShrinks;
@property (nonatomic) double defaultConstant;
@property (nonatomic) double additionalConstant;
@property (copy, nonatomic) NSString *textStyle;

+ (id)_constraintForAutoitem:(id)a0 constrainedItem:(id)a1 attribute:(long long)a2 relatedBy:(long long)a3 toItem:(id)a4 attribute:(long long)a5 multiplier:(double)a6 defaultConstant:(double)a7 additionalConstant:(double)a8 initialize:(BOOL)a9;
+ (double)_maximumWidthOfStrings:(id)a0 withFont:(id)a1;
+ (id)baselineConstraintForAutoitem:(id)a0 relation:(long long)a1 toView:(id)a2 attribute:(long long)a3 defaultConstant:(double)a4;
+ (id)baselineConstraintForView:(id)a0 attribute:(long long)a1 relation:(long long)a2 toAutoitem:(id)a3 defaultConstant:(double)a4;
+ (id)constraintForAutoitem:(id)a0 additionalConstant:(double)a1 constantLoadingBlock:(id /* block */)a2;
+ (id)constraintForAutoitem:(id)a0 additionalConstant:(double)a1 constantWidthSizingStringsLoadingBlock:(id /* block */)a2;
+ (id)constraintForAutoitem:(id)a0 attribute:(long long)a1 relatedBy:(long long)a2 toItem:(id)a3 attribute:(long long)a4 multiplier:(double)a5 defaultConstant:(double)a6;
+ (id)constraintForAutoitem:(id)a0 constrainedItem:(id)a1 attribute:(long long)a2 relatedBy:(long long)a3 toItem:(id)a4 attribute:(long long)a5 multiplier:(double)a6 defaultConstant:(double)a7;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (double)_defaultConstantByFixingUpDefaultConstant:(double)a0;
- (void)_forceUpdatePreferredContentSize;
- (void)_reloadPreferredContentSize:(BOOL)a0;

@end
