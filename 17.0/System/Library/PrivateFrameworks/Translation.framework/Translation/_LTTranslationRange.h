@class NSString, NSDictionary;

@interface _LTTranslationRange : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL shouldTranslate;
@property (copy, nonatomic) NSDictionary *metaInfo;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 text:(id)a1 shouldTranslate:(BOOL)a2;

@end
