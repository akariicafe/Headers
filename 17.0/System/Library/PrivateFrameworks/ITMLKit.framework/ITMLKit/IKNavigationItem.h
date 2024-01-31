@class NSDictionary, IKAppDocument;

@interface IKNavigationItem : NSObject

@property (retain, nonatomic) IKAppDocument *document;
@property (retain, nonatomic) NSDictionary *options;

- (void).cxx_destruct;
- (id)initWithDocument:(id)a0 presentationOptions:(id)a1;

@end
