@class NSString, FCThreadSafeMutableDictionary;

@interface FCEphemeralAssetKeyCache : NSObject <FCAssetKeyCacheType> {
    FCThreadSafeMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)interestTokenForWrappingKeyIDs:(id)a0;
- (void)setWrappingKey:(id)a0 forWrappingKeyID:(id)a1;
- (void)removeAllWrappingKeys;
- (void).cxx_destruct;
- (id)wrappingKeyForWrappingKeyID:(id)a0;

@end
