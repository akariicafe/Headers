@class NSUUID, SWHighlight;
@protocol SWHighlightEvent;

@interface SWCachedHighlightEvent : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) id<SWHighlightEvent> event;
@property (readonly, nonatomic) SWHighlight *highlight;

+ (id)cachedEvent:(id)a0 forHighlight:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEvent:(id)a0 forHighlight:(id)a1;

@end
