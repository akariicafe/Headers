@class NSAttributedString;

@interface MUPlaceSectionFooterViewModel : NSObject

@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
