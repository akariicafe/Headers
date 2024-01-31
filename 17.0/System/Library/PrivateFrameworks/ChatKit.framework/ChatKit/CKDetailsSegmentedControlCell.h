@class NSString, UISegmentedControl;

@interface CKDetailsSegmentedControlCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
