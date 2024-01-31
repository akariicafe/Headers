@class NSCache, NSMutableArray, NSString;
@protocol SXDOMModificationContextFactory, SXDOMCacheKeyFactory, SXDOMFactory;

@interface SXDOMModifierManager : NSObject <SXDOMModifierManager, SXLayoutProcessor>

@property (readonly, nonatomic) id<SXDOMFactory> DOMFactory;
@property (readonly, nonatomic) id<SXDOMModificationContextFactory> contextFactory;
@property (readonly, nonatomic) id<SXDOMCacheKeyFactory> cacheKeyFactory;
@property (readonly, nonatomic) NSMutableArray *modifiers;
@property (readonly, nonatomic) NSCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
