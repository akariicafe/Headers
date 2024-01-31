@class NSString, UIColor, UIView;
@protocol SBUISystemApertureContentViewContaining;

@interface SBUISystemApertureCustomContentProvider : NSObject <SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling>

@property (readonly, nonatomic) UIView *providedView;
@property (weak, nonatomic) id<SBUISystemApertureContentViewContaining> contentContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *contentColor;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;

@end
