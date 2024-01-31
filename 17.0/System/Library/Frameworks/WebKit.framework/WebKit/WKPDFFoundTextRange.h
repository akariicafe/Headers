@interface WKPDFFoundTextRange : UITextRange

@property (nonatomic) unsigned long long index;

+ (id)foundTextRangeWithIndex:(unsigned long long)a0;

- (id)start;
- (id)end;
- (BOOL)isEmpty;

@end
