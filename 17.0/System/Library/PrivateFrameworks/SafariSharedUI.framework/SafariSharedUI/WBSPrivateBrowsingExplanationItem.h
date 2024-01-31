@class UIImage, NSString;

@interface WBSPrivateBrowsingExplanationItem : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic, getter=isLimitedToPrivateBrowsing) BOOL limitedToPrivateBrowsing;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *title;

+ (id)itemsForConfiguration:(id)a0;
+ (id)lockedPrivateBrowsingPromptForConfiguration:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithImage:(id)a0 title:(id)a1 message:(id)a2 limitedToPrivateBrowsing:(BOOL)a3;
- (id)_initWithSymbolName:(id)a0 title:(id)a1 message:(id)a2 limitedToPrivateBrowsing:(BOOL)a3;

@end
