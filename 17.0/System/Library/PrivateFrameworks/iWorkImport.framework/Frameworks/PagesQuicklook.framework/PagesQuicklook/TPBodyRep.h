@class TPBodyLayout, NSSet;

@interface TPBodyRep : TSWPRep {
    NSSet *_lastSelectedInfos;
}

@property (readonly, nonatomic) TPBodyLayout *bodyLayout;

- (id)storage;
- (void).cxx_destruct;

@end
