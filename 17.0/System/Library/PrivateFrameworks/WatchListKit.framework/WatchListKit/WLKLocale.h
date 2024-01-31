@class NSString, NSLocale;

@interface WLKLocale : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSLocale *locale;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
