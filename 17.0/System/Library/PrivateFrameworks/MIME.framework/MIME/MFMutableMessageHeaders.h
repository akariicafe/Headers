@class NSArray, NSString, NSData, NSMutableDictionary, NSMutableArray;

@interface MFMutableMessageHeaders : MFMessageHeaders <ECMutableMessageHeaders> {
    NSMutableDictionary *_headersAdded;
    NSMutableArray *_headersRemoved;
}

@property (readonly, nonatomic) NSArray *listUnsubscribeCommands;
@property (readonly, nonatomic) NSString *listUnsubscribePostContent;
@property (readonly, nonatomic) NSData *encodedHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopy;
- (void).cxx_destruct;
- (id)allHeaderKeys;
- (id)firstHeaderForKey:(id)a0;
- (BOOL)hasHeaderForKey:(id)a0;
- (id)headersDictionary;
- (void)removeHeaderForKey:(id)a0;
- (void)setAddressListForBcc:(id)a0;
- (void)setAddressListForCc:(id)a0;
- (void)setAddressListForSender:(id)a0;
- (void)setAddressListForTo:(id)a0;
- (void)setHeader:(id)a0 forKey:(id)a1;
- (void)setReferences:(id)a0;
- (void)stripInternalHeaders;
- (void)setAddressListForReplyTo:(id)a0;
- (id)_copyHeaderValueForKey:(id)a0 offset:(unsigned long long *)a1 decoded:(BOOL)a2;
- (void)_appendAddedHeaderKey:(id)a0 value:(id)a1 toData:(id)a2;
- (void)_appendHeaderKey:(id)a0 value:(id)a1 toData:(id)a2;
- (id)_copyHeaderValueForKey:(id)a0;
- (void)setAddressList:(id)a0 forKey:(id)a1;

@end
