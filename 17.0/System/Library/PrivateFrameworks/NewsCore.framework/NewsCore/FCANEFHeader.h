@class NSData, NSString;

@interface FCANEFHeader : NSObject {
    NSData *_wrappingKeyID;
    NSData *_wrappedKey;
    NSString *_contentType;
    NSData *_headerData;
}

- (id)init;
- (void).cxx_destruct;

@end
