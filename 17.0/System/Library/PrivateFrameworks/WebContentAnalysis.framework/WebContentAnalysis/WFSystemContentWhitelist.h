@class NSArray;

@interface WFSystemContentWhitelist : NSObject {
    NSArray *_whitelistItems;
}

+ (id)newWhitelistItemFromPlistEntry:(id)a0;
+ (id)defaultSystemWhitelist;

- (void)dealloc;
- (id)initWithWhitelistURL:(id)a0;
- (BOOL)isURLWhitelisted:(id)a0;

@end
