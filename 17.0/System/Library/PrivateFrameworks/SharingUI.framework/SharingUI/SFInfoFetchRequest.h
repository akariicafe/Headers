@interface SFInfoFetchRequest : NSObject

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (copy, nonatomic) id /* block */ infoResponseHandler;

- (void).cxx_destruct;

@end
