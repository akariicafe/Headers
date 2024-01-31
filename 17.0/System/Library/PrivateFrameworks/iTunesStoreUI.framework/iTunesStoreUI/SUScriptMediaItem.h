@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject

@property (readonly, nonatomic) MPMediaItem *nativeItem;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)copyScriptMediaTypesForNativeMediaTypes:(unsigned long long)a0;
+ (unsigned long long)nativeMediaTypesForScriptMediaTypes:(id)a0;
+ (id)scriptMediaTypeForNativeMediaType:(unsigned long long)a0;

- (id)valueForProperty:(id)a0;
- (id)_className;
- (id)imageURLWithWidth:(id)a0 height:(id)a1;

@end
