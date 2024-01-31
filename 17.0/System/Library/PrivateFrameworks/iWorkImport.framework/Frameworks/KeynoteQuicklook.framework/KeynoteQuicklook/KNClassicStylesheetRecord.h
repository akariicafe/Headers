@class NSDictionary, NSString;

@interface KNClassicStylesheetRecord : TSPObject <TSKModel>

@property (retain, nonatomic) NSDictionary *identifierToStyleMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)childEnumerator;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)referencedStyles;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
