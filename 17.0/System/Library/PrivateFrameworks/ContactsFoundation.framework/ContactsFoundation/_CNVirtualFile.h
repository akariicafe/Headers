@class NSData, NSMutableDictionary;

@interface _CNVirtualFile : NSObject

@property (copy) NSData *contents;
@property (readonly) NSMutableDictionary *extendedAttributes;

- (id)init;
- (void).cxx_destruct;

@end
