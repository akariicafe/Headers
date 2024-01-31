@interface TCXmlTextWriterProvider : NSObject

@property (readonly, nonatomic) struct _xmlTextWriter { } *textWriter;

- (BOOL)setUp;
- (void)dealloc;
- (BOOL)tearDown;
- (BOOL)setUpWithTextWriter:(struct _xmlTextWriter { } *)a0;

@end
