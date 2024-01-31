@class NSString;

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand <MPCPlayerChangeItemCommand>

@property (readonly, nonatomic) unsigned long long changeItemSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previousItem;
- (id)changeToItem:(id)a0;
- (id)nextChapter;
- (id)previousItemDeferringToPlaybackQueuePosition;
- (id)initWithResponse:(id)a0 changeItemSupport:(unsigned long long)a1;
- (id)nextItem;
- (id)changeToSection:(id)a0;
- (id)previousSection;
- (id)previousChapter;
- (id)nextSection;

@end
