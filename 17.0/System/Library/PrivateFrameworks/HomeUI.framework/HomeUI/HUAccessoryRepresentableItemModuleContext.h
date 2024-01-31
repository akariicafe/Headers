@interface HUAccessoryRepresentableItemModuleContext : NSObject {
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ itemFilter;
}

@property (nonatomic) void /* unknown type, empty encoding */ objectLevel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ accessoryContainer;
@property (nonatomic) void /* unknown type, empty encoding */ sectionGroupingType;
@property (nonatomic) void /* unknown type, empty encoding */ hideSourceItemDescriptions;
@property (nonatomic) void /* unknown type, empty encoding */ showFooter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ valueSource;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, copy) id /* block */ itemFilter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObjectLevel:(unsigned long long)a0 accessoryContainer:(id)a1 sectionGroupingType:(long long)a2 hideSourceItemDescriptions:(BOOL)a3 showFooter:(BOOL)a4 valueSource:(id)a5 filter:(id /* block */)a6 itemFilter:(id /* block */)a7;

@end
