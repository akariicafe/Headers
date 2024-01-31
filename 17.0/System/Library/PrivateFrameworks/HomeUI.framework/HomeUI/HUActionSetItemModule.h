@class NSString;

@interface HUActionSetItemModule : HFItemModule {
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ sortBlock;
}

@property (class, nonatomic, readonly) NSString *actionSetSectionIdentifier;

@property (nonatomic) void /* unknown type, empty encoding */ actionSetItemStyle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ home;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, copy) id /* block */ sortBlock;
@property (nonatomic, retain) void /* unknown type, empty encoding */ actionSetItemProvider;

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithHome:(id)a0 itemUpdater:(id)a1;
- (id)initWithItemUpdater:(id)a0;

@end
