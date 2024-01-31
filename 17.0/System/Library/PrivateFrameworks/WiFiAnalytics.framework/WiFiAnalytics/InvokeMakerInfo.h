@interface InvokeMakerInfo : NSObject

@property (nonatomic) SEL selector;
@property (retain, nonatomic) id target;

- (void).cxx_destruct;
- (id)initWithSel:(SEL)a0 andTarget:(id)a1;

@end
