@class BKSMousePointerGlobalContextOptions;

@interface BKSMutableMousePointerEventGlobalRoute : BKSMousePointerEventGlobalRoute

@property (nonatomic) unsigned int contextID;
@property (retain, nonatomic) BKSMousePointerGlobalContextOptions *options;

- (void)setOptions:(id)a0;
- (void)setContextID:(unsigned int)a0;

@end
