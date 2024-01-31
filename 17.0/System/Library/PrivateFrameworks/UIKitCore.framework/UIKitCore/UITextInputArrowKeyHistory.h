@class UITextPosition;

@interface UITextInputArrowKeyHistory : NSObject

@property (retain, nonatomic) UITextPosition *startPosition;
@property (nonatomic) int anchor;
@property (retain, nonatomic) UITextPosition *start;
@property (retain, nonatomic) UITextPosition *end;
@property (retain, nonatomic) UITextPosition *cursor;
@property (nonatomic) BOOL affinityDownstream;
@property (nonatomic) long long amount;

- (void).cxx_destruct;

@end
