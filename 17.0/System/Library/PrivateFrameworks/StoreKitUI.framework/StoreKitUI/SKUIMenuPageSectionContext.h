@class NSMutableDictionary;

@interface SKUIMenuPageSectionContext : NSObject {
    NSMutableDictionary *_sections;
}

@property (nonatomic) long long selectedIndex;

- (void).cxx_destruct;
- (id)sectionsForIndex:(long long)a0;
- (void)setSections:(id)a0 forIndex:(long long)a1;

@end
