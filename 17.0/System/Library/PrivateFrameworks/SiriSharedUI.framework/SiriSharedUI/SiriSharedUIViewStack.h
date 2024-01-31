@class NSArray, UIView, NSMutableOrderedSet;
@protocol SiriSharedUIStackableContent, SiriSharedUIStackableContentActionOffering;

@interface SiriSharedUIViewStack : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableOrderedSet *mutableViews;
@property (readonly, nonatomic) NSArray *contentViews;
@property (readonly, nonatomic) UIView<SiriSharedUIStackableContent, SiriSharedUIStackableContentActionOffering> *mostRecentlyAddedView;

- (void)reset;
- (void)addContentView:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setContentViews:(id)a0;
- (id)viewAtIndex:(long long)a0;
- (void)removeContentView:(id)a0;
- (BOOL)containsContentView:(id)a0;
- (id)initWithContentViews:(id)a0;
- (id)nextViewAfterContentView:(id)a0;
- (id)previousViewBeforeContentView:(id)a0;

@end
