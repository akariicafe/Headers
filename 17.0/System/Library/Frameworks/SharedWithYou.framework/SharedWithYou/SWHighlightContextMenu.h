@class NSString;

@interface SWHighlightContextMenu : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
