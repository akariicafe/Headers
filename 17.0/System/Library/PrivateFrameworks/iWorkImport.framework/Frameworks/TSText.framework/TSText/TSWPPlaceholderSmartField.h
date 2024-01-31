@class NSString;

@interface TSWPPlaceholderSmartField : TSWPSmartField {
    BOOL _localizable;
    NSString *_scriptTag;
}

@property (nonatomic) BOOL isLocalizable;
@property (copy, nonatomic) NSString *scriptTag;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (unsigned short)smartFieldKind;

@end
