@interface SFRenderingCommand : NSObject

@property (copy, nonatomic) id /* block */ commandBlock;
@property (nonatomic) struct CGSize { double width; double height; } contextSize;

- (void).cxx_destruct;

@end
