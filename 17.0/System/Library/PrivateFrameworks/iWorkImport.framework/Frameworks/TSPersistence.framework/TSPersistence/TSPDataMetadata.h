@class TSUColor;

@interface TSPDataMetadata : TSPObject

@property (copy, nonatomic) TSUColor *fallbackColor;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1;

@end
