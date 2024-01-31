@class NSArray;

@interface ASASelectorControl : ASAControl

@property (nonatomic) unsigned int currentItem;
@property (nonatomic) NSArray *currentItems;
@property (readonly, copy, nonatomic) NSArray *availableItems;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (unsigned int)currentItem;
- (void)setCurrentItem:(unsigned int)a0;
- (id)availableItems;
- (id)nameForItem:(unsigned int)a0;
- (id)coreAudioClassName;

@end
