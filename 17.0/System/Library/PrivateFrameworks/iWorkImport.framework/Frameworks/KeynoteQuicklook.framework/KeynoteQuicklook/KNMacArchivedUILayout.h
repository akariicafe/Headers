@class KNMacUILayout;

@interface KNMacArchivedUILayout : TSPObject

@property (readonly, nonatomic) KNMacUILayout *uiLayout;

- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (id)initWithUILayout:(id)a0 context:(id)a1;
- (void)loadFromUnarchiver:(id)a0;

@end
