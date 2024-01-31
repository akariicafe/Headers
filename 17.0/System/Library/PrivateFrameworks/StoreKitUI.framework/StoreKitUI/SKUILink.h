@class SKUIItem, NSString, NSDictionary, NSURL, SKUICountdown, NSNumber;

@interface SKUILink : NSObject <SSMetricsEventFieldProvider> {
    SKUICountdown *_countdown;
}

@property (readonly, nonatomic, getter=isActionable) BOOL actionable;
@property (readonly, nonatomic) SKUIItem *item;
@property (readonly, nonatomic) NSNumber *itemIdentifier;
@property (readonly, nonatomic) NSDictionary *linkDictionary;
@property (readonly, nonatomic) NSString *targetString;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)valueForMetricsField:(id)a0;
- (id)initWithURL:(id)a0 title:(id)a1 targetString:(id)a2;
- (void)_setItem:(id)a0;
- (id)initWithComponentContext:(id)a0;
- (id)initWithLinkDictionary:(id)a0;

@end
