@class UIView;
@protocol SAStrokeVisualResponse;

@interface SAStrokeViewProvider : NSObject

@property (retain, nonatomic) UIView<SAStrokeVisualResponse> *strokeView;

- (void).cxx_destruct;
- (id)strokeViewWithDelegate:(id)a0;

@end
