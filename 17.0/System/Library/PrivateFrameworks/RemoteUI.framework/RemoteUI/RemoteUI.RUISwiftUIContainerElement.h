@interface RemoteUI.RUISwiftUIContainerElement : RUIElement <RUITopLevelPageElement> {
    void /* unknown type, empty encoding */ childElementDirectory;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ objectModel;
}

+ (BOOL)supportsElementNamed:(id)a0;

- (id)viewController;
- (id)view;
- (void)setObjectModel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)populatePostbackDictionary:(id)a0;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (id)initWithElement:(id)a0 parent:(id)a1;
- (id)subElementWithID:(id)a0;

@end
