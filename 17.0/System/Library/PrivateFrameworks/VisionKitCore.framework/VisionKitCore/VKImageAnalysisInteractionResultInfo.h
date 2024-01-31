@class NSString;

@interface VKImageAnalysisInteractionResultInfo : NSObject

@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) NSString *displayMessage;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *glyphName;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBoundingRect;

- (void).cxx_destruct;
- (id)initWithDisplayLabel:(id)a0 displayMessage:(id)a1 glyphName:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
