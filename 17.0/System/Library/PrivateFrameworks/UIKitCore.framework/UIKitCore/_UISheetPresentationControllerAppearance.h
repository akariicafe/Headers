@class NSString;

@interface _UISheetPresentationControllerAppearance : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_isDimmingAlwaysVisible) BOOL _dimmingAlwaysVisible;
@property (readonly, nonatomic) BOOL _prefersDimmingVisible;
@property (readonly, nonatomic) NSString *_largestUndimmedDetentIdentifier;
@property (readonly, nonatomic) NSString *_smallestDimmedDetentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appearanceWithSmallestDimmedDetentIdentifier:(id)a0;
+ (id)appearanceWithLargestUndimmedDetentIdentifier:(id)a0;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)appearancePreferringDimmingVisible:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
